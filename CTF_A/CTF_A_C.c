#include <stdio.h>

int main()
{
    int i;

    int N, M;
    scanf("%d%d", &N, &M);
    int P[N], S[M];
    for ( i = 0; i < N; ++i ) scanf("%d", &P[i]);
    for ( i = 0; i < M; ++i ) scanf("%d", &S[i]);

    int sum = 0;
    for ( i = 0; i < M; ++i ) sum += P[S[i]-1];

    printf("%d\n", sum);

    return 0;
}
