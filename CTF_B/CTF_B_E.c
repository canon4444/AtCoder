#include <stdio.h>

typedef struct {
    int x, y;
} axis;

int main()
{
    int i, j, k;

    int R, C, N;
    scanf("%d%d", &R, &C);
    int s[2], g[2], r[N], c[N], h[N], w[N];
    scanf("%d%d", &s[0], &s[1]);
    scanf("%d%d", &g[0], &g[1]);
    for( i = 0; i < 2; ++i ) --s[i], --g[i];
    scanf("%d", &N);
    for( i = 0; i < N; ++i ) scanf("%d%d%d%d", &r[i], &c[i], &h[i], &w[i]);

    //色を塗る
    int table[R][C];
    for( i = 0; i < R; ++i ) for( j = 0; j < C; ++j ) table[i][j] = 0;
    for( i = 0; i < N; ++i ) for( j = r[i]-1; j < r[i]+h[i]-1; ++j ) for( k = c[i]-1; k < c[i]+w[i]-1; ++k ) table[j][k] = 1;
    if( !table[s[0]][s[1]] || !table[g[0]][g[1]] ){ printf("NO\n"); return 0; } //スタートとゴールが白だったら

    //幅優先探索
    /*
    axis queue[R*C];
    int pre = 0, rear = 0;
    queue[rear].x = s[1], queue[rear].y = s[0];
    while( pre < R*C && rear < R*C ){
        int x = queue[pre].x, y = queue[pre++].y;
        table[y][x] = 0;
        if( 0 < y && table[y-1][x] ) queue[++rear].x = x, queue[rear].y = y-1, table[y-1][x] = 0;
        if( y < R-1 && table[y+1][x] ) queue[++rear].x = x, queue[rear].y = y+1, table[y+1][x] = 0;
        if( 0 < x && table[y][x-1] ) queue[++rear].x = x-1, queue[rear].y = y, table[y][x-1] = 0;
        if( x < C-1 && table[y][x+1] ) queue[++rear].x = x+1, queue[rear].y = y, table[y][x+1] = 0;
        if( x == g[1] && y == g[0] ){ printf("YES\n"); return 0; }
    }
    printf("NO\n");
    */
    
    //深さ優先探索
    axis stack[R*C];
    int pre = 0, cnt;
    stack[pre].x = s[1], stack[pre++].y = s[0];
    for( cnt = 0; cnt < R*C; ++cnt ){
        int x = stack[--pre].x, y = stack[pre].y;
        table[y][x] = 0;
        if( 0 < y && table[y-1][x] ) stack[pre].x = x, stack[pre++].y = y-1, table[y-1][x] = 0;
        if( y < R-1 && table[y+1][x] ) stack[pre].x = x, stack[pre++].y = y+1, table[y+1][x] = 0;
        if( 0 < x && table[y][x-1] ) stack[pre].x = x-1, stack[pre++].y = y, table[y][x-1] = 0;
        if( x < C-1 && table[y][x+1] ) stack[pre].x = x+1, stack[pre++].y = y, table[y][x+1] = 0;
        if( x == g[1] && y == g[0] ){ printf("YES\n"); return 0; }
    }
    printf("NO\n");

    return 0;
}
