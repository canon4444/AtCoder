//50点解答

#include <stdio.h>

int func(int n)
{
    if( n == 0 ) return 1;
    else return n * func(n-1);
}

int main()
{
    int i, j, tmp;

    int N;
    scanf("%d", &N);
    int T[N];
    for( i = 0; i < N; ++i )
        scanf("%d", &T[i]);

    for( i = 0; i < N; ++i )
        for( j = i+1; j < N; ++j )
            if( T[i] > T[j] ){
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }

    int time = 0;
    long penalty = 0;
    for( i = 0; i < N; ++i ){
        time += T[i];
        penalty += time;
    }

    int kind = 1, cnt;
    for( i = 0, cnt = 1; i < N; cnt = 0, ++i, cnt = 1 ){
        while( T[i] == T[i+cnt] ) ++cnt;
        kind *= func(cnt);
        kind %= 1000000007;
    }

    printf("%ld\n%d\n", penalty, kind);

    return 0;
}
