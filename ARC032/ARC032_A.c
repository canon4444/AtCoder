#include <stdio.h>

int main()
{
    int i;

    int n; scanf("%d", &n);

    int sum = 0, flag = 0, memo = 0;
    for( i = 0; i <= n; ++i ) sum += i; //1+ ... + n = sum

    for( i = 0; i <= 1000; ++i ) memo += i; //下のループの上限

    for( i = 2; i <= memo; ++i ) {
        if( sum % i == 0 ) ++flag; //約数がある
        if( 1 < flag ) break; //約数が2つ以上で非素数（1では既に割っている）
    }

    if( 1 == flag ) printf("WANWAN\n");
    else printf("BOWWOW\n");

    return 0;
}
