#include <stdio.h>

int main()
{
    int i;

    int N;
    scanf("%d", &N);
    int V[N], F[N];
    for ( i = 0; i < N; ++i ) scanf("%d", &V[i]);
    for ( i = 0; i < N; ++i ) scanf("%d", &F[i]);

    int sum = 0;
    for ( i = 0; i < N; ++i ) if ( V[i] < F[i]*2 ) ++sum;

    printf("%d\n", sum);

    return 0;
}
