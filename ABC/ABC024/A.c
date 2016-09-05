#include <stdio.h>
 
int main(void) {
	int A, B, C, K, S, T;
    scanf("%d%d%d%d%d%d", &A, &B, &C, &K, &S, &T);
 
    if( K <= S + T ){
        printf("%d\n", S * (A-C) + T * (B-C));
    } else {
        printf("%d\n", S * A + T * B);
    }
 
	return 0;
}
