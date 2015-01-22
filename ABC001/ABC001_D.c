// http://abc001.contest.atcoder.jp/tasks/abc001_4
#include <stdio.h>

int main()
{
    int i, j;

    //入力
    int N;
    scanf("%d", &N);
    int S[N], E[N];
    for( i = 0; i < N; ++i ){
        scanf("%d%d", &S[i], &E[i]);
        while( S[i] % 5 ) --S[i];
        E[i] *= -1; while( E[i] % 5 ) ++E[i];
    }

    //みょん
    int s[N], e[N], p;
    for( i = 0; i < N; ++i )
        for( j = i+1; j < N; ++j )
            if( S[i] > S[j] ){
                int tmp = S[i];
                S[i] = S[j];
                S[j] = tmp;
                tmp = E[i];
                E[i] = E[j];
                E[j] = tmp;
            }

    for( i = 0, p = 0; i < N; ++i ){
        if( i == 0 ) s[p] = S[i], e[p] = E[i];
        if( S[i] <= e[p] && e[p] < E[i] )
            e[p] = E[i];
        else if( e[p] < S[i] ) s[++p] = S[i], e[p] = E[i];
    }

    //出力
    for( i = 0, ++p; i < p; ++i )
        printf("%04d-%04d\n", s[i], e[i]);

    return 0;
}
