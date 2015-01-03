#include <stdio.h>

int main()
{
    int i;

    int n; scanf("%d", &n);

    int sum = 0, flag = 0, memo = 0;
    for( i = 0; i <= n; ++i ) sum += i;

    for( i = 0; i <= 1000; ++i ) memo += i;

    for( i = 2; i <= memo; ++i ) {
        if( sum % i == 0 ) ++flag;
        if( 1 < flag ) break;
    }

    if( 1 == flag ) printf("WANWAN\n");
    else printf("BOWWOW\n");

    return 0;
}
