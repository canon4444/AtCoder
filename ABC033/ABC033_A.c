#include <stdio.h>

int main()
{
    int i;

    int N;
    scanf("%d", &N);

    int flag = 0, n = N % 10;
    for( i = 0; i < 3; ++i ){
        N /= 10;
        if( n == N%10 ) ++flag;
        else break;
    }

    if( flag == 3 ) printf("SAME\n");
    else printf("DIFFERENT\n");

    return 0;
}
