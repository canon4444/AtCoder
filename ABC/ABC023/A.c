#include <stdio.h>
 
int main()
{
    int X;
    scanf("%d", &X);
 
    printf("%d\n", X % 10 + X / 10);
 
    return 0;
}
