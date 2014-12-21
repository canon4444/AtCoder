#include <stdio.h>

int main()
{
    int n, i, j;

    char A[55];
    for ( n = 0; n < 50; ++n ) { 
        scanf("%c", &A[n]);
        if ( A[n] == '\n' )
            break;
    }

    unsigned int B;
    scanf("%d", &B);
    --B;

    printf("%c\n", A[B%n]);

    return 0;
}
