#include <stdio.h>

int main()
{
    int M, D;
    scanf("%d%d", &M, &D);

    if ( M % D ) printf("NO\n");
    else printf("YES\n");

    return 0;
}
