#include <stdio.h>

int main()
{
    int i, j;

    int a[3];
    for( i = 0; i < 3; ++i )
        scanf("%d", &a[i]);
    for( i = 0; i < 3; ++i )
        for( j = i+1; j < 3; ++j )
            if( a[i] > a[j] ){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }

    printf("%d\n", a[1]);

    return 0;
}
