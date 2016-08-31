#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    if ( A < 0 )
        A *= -1;

    if ( B < 0 )
        B *= -1;

    if ( A < B )
        printf("Ant\n");
    else if ( A > B )
        printf("Bug\n");
    else
        printf("Draw\n");

    return 0;
}
