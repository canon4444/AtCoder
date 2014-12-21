#include <stdio.h>

int main()
{
    unsigned int A, B, sum = 0;
    scanf("%d%d", &A, &B);

    while ( A % 4 ) ++A;
    for ( ; A <= B; A += 4 )
        if ( A % 400 == 0 )
            ++sum;
        else if ( A % 100 == 0 )
            continue;
        else
            ++sum;

    printf("%d\n", sum);

    return 0;
}
