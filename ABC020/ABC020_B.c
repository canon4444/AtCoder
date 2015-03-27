#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j;

    char A[4], B[4];
    scanf("%s%s", A, B);

    size_t len;
    char C[7];
    for( i = 0, j = 0, len = strlen(A); j < (int)len; ++i, ++j )
        C[i] = A[j];
    for( j = 0, len = strlen(B); j < (int)len; ++i, ++j )
        C[i] = B[j];
    C[i] = '\0';

    int x = atoi(C);

    printf("%d\n", x * 2);

    return 0;
}
