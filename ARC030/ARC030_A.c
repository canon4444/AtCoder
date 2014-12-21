#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%*c%d", &n, &k);

    if ( k <= n / 2 )
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
