#include <stdio.h>

int main()
{
    int i, j;

    int N, T;
    scanf("%d%d", &N, &T);
    int A[N];
    for ( i = 0; i < N; ++i ) scanf("%d", &A[i]);

    int max = 0, B[T];
    for ( i = 0; i < T; ++i ) B[i] = 0;
    for ( i = 0; i < N; ++i ) for ( j = 1; A[i] * j <= T; ++j ) ++B[A[i]*j-1];
    for ( i = 0; i < T; ++i ) max = max < B[i] ? B[i] : max;

    printf("%d\n", max);
 
    return 0;
}
