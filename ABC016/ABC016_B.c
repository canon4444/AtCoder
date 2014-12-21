#include <stdio.h>

int main()
{
    int A, B, C;
    int plus = 0, minus = 0;

    scanf("%d%d%d", &A, &B, &C);

    if ( C == A + B ) plus = 1;
    if ( C == A - B ) minus = 1;

    if ( plus & minus ) printf("?\n");
    else if ( plus ) printf("+\n");
    else if ( minus ) printf("-\n");
    else printf("!\n");

    return 0;
}
