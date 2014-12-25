#include <stdio.h>

int main()
{
    int i, j, k;

    int R, C, N;
    scanf("%d%d", &R, &C);
    int s[2], g[2], r[N], c[N], h[N], w[N];
    scanf("%d%d", &s[0], &s[1]);
    scanf("%d%d", &g[0], &g[1]);
    for ( i = 0; i < 2; ++i ) --s[i], --g[i];
    scanf("%d", &N);
    for ( i = 0; i < N; ++i ) scanf("%d%d%d%d", &r[i], &c[i], &h[i], &w[i]);

    int table[R][C], x = s[1], y = s[0];
    for ( i = 0; i < R; ++i ) for ( j = 0; j < C; ++j ) table[i][j] = 0;
    for ( i = 0; i < N; ++i ) for ( j = r[i]-1; j < r[i]+h[i]-1; ++j ) for ( k = c[i]-1; k < c[i]+w[i]-1; ++k ) table[j][k] = 1;
    
    int flag = 1, note[4], check = 0;
    for ( i = 0; flag; ++i ) {
        if ( y == g[1] && x == g[0] ) { flag = 1; break; }
        if ( table[y-1][x] && 0 < y ) note[0] = 1; else note[0] = 0;
        if ( table[y+1][x] && y < R ) note[1] = 1; else note[1] = 0;
        if ( table[y][x-1] && 0 < x ) note[2] = 1; else note[2] = 0;
        if ( table[y][x+1] && x < C ) note[3] = 1; else note[3] = 0;
        int error = 0;
        for ( j = 0; j < 4; ++j )
            if ( note[j] ) switch ( j ) {
                case 0: --y; break;
                case 1: ++y; break;
                case 2: --x; break;
                case 3: ++x; break;
                default: break;
                }
            else ++error;
        if ( 4 == error ) { x = s[1]; y = s[0]; ++check; }
        if ( 4 == check ) { flag = 0; break; }
        table[y][x] = -1;
    }

    if ( flag ) printf("YES\n");
    else printf("NO\n");

    return 0;
}
