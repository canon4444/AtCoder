#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);


    if( n % 2 ) printf("%d\n", n+1); //奇数の人は次の人と
    else printf("%d\n", n-1); //偶数の人は前の人と


    return 0;
}
