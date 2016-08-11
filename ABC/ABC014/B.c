#include <stdio.h>

int main()
{
    int n, X;

    scanf("%d%d", &n, &X);

    int a[n];

    int i, sum = 0;

    for ( i = 0; i < n; ++i )
        scanf("%d", &a[i]);

    for ( i = 0; i < n; ++i ) {
        if ( X & 1 )
            sum += a[i];
        X >>= 1;
    }

    printf("%d\n", sum);

    return 0;
}
