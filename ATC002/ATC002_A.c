#include <iostream>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    int sy, sx;
    cin >> sy >> sx;
    int gy, gx;
    cin >> gy >> gx;
    char map[R][C];
    for( int i = 0; i < R; ++i ){
        for( int j = 0; j < C; ++j ){
            cin >> map[i][j];
        }
    }
    
    //手数
    int memo[R][C];
    for( int i = 0; i < R; ++i ){
        for( int j = 0; j < C; ++j ){
            memo[i][j] = 0;
        }
    }
    
    //幅優先探索（キュー）
    int y, x;
    int queueY[R*C], queueX[R*C], out = 0, in = 0;
    queueY[in] = sy-1, queueX[in++] = sx-1; //inqueue
    while( 1 ){
        y = queueY[out], x = queueX[out], out = (out+1)%(R*C); //dequeue
        if( y == gy-1 && x == gx-1 ) break; //ゴールかどうか
        
        //inqueueと手数メモ
        if( -1 < y-1 ) if( memo[y-1][x] == 0 && map[y-1][x] == '.' ) queueY[in] = y-1, queueX[in] = x, in = (in+1)%(R*C), memo[y-1][x] = memo[y][x]+1;
        if( -1 < x-1 ) if( memo[y][x-1] == 0 && map[y][x-1] == '.' ) queueY[in] = y, queueX[in] = x-1, in = (in+1)%(R*C), memo[y][x-1] = memo[y][x]+1;
        if( x+1 < C ) if( memo[y][x+1] == 0 && map[y][x+1] == '.' ) queueY[in] = y, queueX[in] = x+1, in = (in+1)%(R*C), memo[y][x+1] = memo[y][x]+1;
        if( y+1 < R ) if( memo[y+1][x] == 0 && map[y+1][x] == '.' ) queueY[in] = y+1, queueX[in] = x, in = (in+1)%(R*C), memo[y+1][x] = memo[y][x]+1;
    }
    
    cout << memo[gy-1][gx-1] << endl;
    
    return 0;
}
