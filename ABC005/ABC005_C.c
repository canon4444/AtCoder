#include <stdio.h>
     
int main()
{
    int i, j, k;

    int T, N;
    scanf("%d%d", &T, &N);
    int A[N];
    for ( i = 0; i < N; ++i ) scanf("%d", &A[i]);
    int M;
    scanf("%d", &M);
    int B[M];
    for ( i = 0; i < M; ++i ) scanf("%d", &B[i]);
     
    int flag = ( N < M ) ? 0 : 1;
    for ( i = 0, k = 0; flag && (i < M); ++i )
        for ( j = k; j < N; k = ++j )
            if ( B[i] < A[j] ) { flag = 0; break; }
            else if ( A[j] <= B[i] && B[i] <= (A[j] + T) ) { 
                flag = 1, k = ++j;
                break; /* can */
            } else flag = 0; /* can't */
    
    if ( flag )
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}
