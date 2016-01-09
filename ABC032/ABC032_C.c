//部分点

#include <stdio.h>

int main()
{
    int i, j;

    int N, K;
    scanf("%d%d", &N, &K);
    int S[N];
    for( i = 0; i < N; ++i ){
        scanf("%d", &S[i]);
    }

    int ans = 0;
    long int sum = 1;
    for( i = 0, j = 0; j < N; ++j ){
        sum *= S[j];
        if( sum == 0 ){
            ans = N;
            break;
        } else if( sum <= K ){
            if( ans < j-i+1 ) ans = j-i+1;
        } else {
            sum /= S[i];
            if( i < j+1 ) ++i;
        }
    }

    printf("%d\n", ans);

    return 0;
}
