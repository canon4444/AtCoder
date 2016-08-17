#include <stdio.h>

int main()
{
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);

    for( ; ; ++n ){
        if( !(n % a) && !(n % b) ){
            printf("%d\n", n);
            break;
        }
    }

    return 0;
}
