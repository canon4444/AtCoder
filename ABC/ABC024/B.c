#include <stdio.h>
 
int main()
{
    int i;
 
    int N, T;
    scanf("%d%d", &N, &T);
 
    int A[N];
    for( i = 0; i < N; ++i ){
        scanf("%d", &A[i]);
    }
 
    int sum = T;
    for( i = 1; i < N; ++i ){
        if( A[i] - A[i-1] < T ){
            sum += A[i] - A[i-1];
        } else {
            sum += T;
        }
    }
 
    printf("%d\n", sum);
 
    return 0;
}
