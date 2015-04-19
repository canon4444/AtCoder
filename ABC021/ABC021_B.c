#include <stdio.h>
 
int main(){
    int N, a, b, K;
    scanf("%d%d%d%d", &N, &a, &b, &K);
 
    int A[N+1];
 
    int i;
    for( i = 0; i < N+1; ++i )
        A[i] = 0;
    A[a] = 1; A[b] = 1;
 
    int tmp;
    for( i = 0; i < K; ++i ){
        scanf("%d", &tmp);
        A[tmp] += 1;
    }
 
    for( i = 0; i < N+1; ++i )
        if( 2 <= A[i] ){
            printf("NO\n");
            return 0;
        }
 
    printf("YES\n");
 
    return 0;
}
