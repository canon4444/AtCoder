#include <stdio.h>

int main()
{
    int n, min;
    scanf("%d%d", &n, &min);

    int t;
    while ( --n ) scanf("%d", &t), min = t < min ? t : min;

    printf("%d\n", min);
     
    return 0;
}
