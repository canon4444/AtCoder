#include <stdio.h>

int main()
{
    int i, j, k;

    int n, c;
    scanf("%d%d%*c", &n, &c);
    int a[n], min = n * c, tmp = 0;
    for ( i = 0; i < n; ++i )
        scanf("%d%*c", &a[i]);

    for ( i = 1; i < 11; ++i )
        for ( j = 1; j < 11; ++j )
            if ( i != j ) {
                for ( k = 0; k < n; ++k )
                    if ( k % 2 ) {
                        if ( a[k] != j )
                            tmp += c;
                    } else {
                        if ( a[k] != i )
                            tmp += c;
                    }
                min = ( min > tmp ) ? tmp : min;
                tmp = 0;
            }
    
    printf("%d\n", min);

    return 0;
}
