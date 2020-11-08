#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 入力
    const int N = 20;
    
    int table[N][N];
    for( int i = 0; i < N; ++i )
        for( int j = 0; j < N; ++j )
            table[i][j] = -1;

    const int M = 100;
    for( int i = 0; i < M; ++i ){
        int x, y;
        cin >> x >> y;
        table[x][y] = i;
    }

    
    // 処理
    String order = "";
    int robotPositionX = 0, robotPositionY = 0;
    int nextPickUpNo = 0;

    for( int i = 0; i < N; ++i ){
        for( int j = 0; j < N; ++j ){
            if( nextPickUpNo == table[i][j] ){
                order += ; // ここからだよー
            }
        }
    }


    
    // 評価
    
