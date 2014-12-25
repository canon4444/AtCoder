#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);

    int max = 0;
    max = (A + B) < (A * B) ? A * B : A + B;
    max = (max + C) < (max * C) ? max * C : max + C;

    printf("%d\n", max);

    return 0;
}
