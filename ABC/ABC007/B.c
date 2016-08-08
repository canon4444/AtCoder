#include <stdio.h>
#include <string.h>

int main() {
    char A[11];
    scanf("%s", A);

    if ( strcmp(A, "a") <= 0 )
        printf("-1\n");
    else
        printf("a\n");

    return 0;
}
