#include <stdio.h>

int main()
{
    int i;

    //入力
    int N, M; scanf("%d%d", &N, &M);
    int a[M], b[M];
    for( i = 0; i < M; ++i ) scanf("%d%d", &a[i], &b[i]);

    //みょん
    //15, 19
    int table[N][2], sum = 0;
    for( i = 0; i < N; ++i )
        table[i][0] = 0, table[i][1] = 0;
    for( i = 0; i < M; ++i )
        table[a[i]-1][0] = 1, table[b[i]-1][1] = a[i];
    for( i = 0; i < N; ++i )
        if( table[i][0] && table[i][1] ) ; //2個以上のノードと結合
        else if( table[i][0] ) ++sum; //+かつ端のノード
        else if( table[i][1] ) ; //-かつ端のノード
        else ++sum; //孤立ノード

    //出力
    printf("%d\n", sum-1);

    return 0;
}
