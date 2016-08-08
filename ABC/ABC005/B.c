#include <stdio.h>

int main()
{
    int N, min; scanf("%d%d", &n, &min);

    int T;
    while ( --N ) scanf("%d", &T), min = T < min ? T : min;

    printf("%d\n", min);
     
    return 0;
}
