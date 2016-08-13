#include <stdio.h>

int main()
{
    int i;

    int s[3], e[3], sum = 0;
    for( i = 0; i < 3; ++i ){
        scanf("%d%d", &s[i], &e[i]);
        sum += s[i] * e[i] / 10;
    }

    printf("%d\n", sum);

    return 0;
}
