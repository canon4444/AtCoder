#include <stdio.h>

int main()
{
    int i;

    int N;
    scanf("%d", &N);
    char S[N][30];
    int P[N];
    for( i = 0; i < N; ++i ){
        scanf("%s%d", S[i], &P[i]);
    }

    int sum = 0, n = 0;
    for( i = 0; i < N; ++i ){
        sum += P[i];
        if( P[n] < P[i] ) n = i;
    }

    if( sum < P[n]*2 ) printf("%s\n", S[n]);
    else printf("atcoder\n");

    return 0;
}
