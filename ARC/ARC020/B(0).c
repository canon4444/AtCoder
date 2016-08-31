#include <stdio.h>

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    int a[n], b[90][n], cnt[90];

    int i, j;
    for ( i = 0; i < n; ++i )
        scanf("%d%*c", &a[i]);

    for ( i = 0; i < 90; ++i)
        cnt[i] = 0;

    int k, g;
    for ( i = 0, k = 1, g = 2; i < 45; ++i, ++g ) {
        if ( 10 < g ) {
            ++k;
            g = k + 1;
        }
        if ( k != g )
            for ( j = 0; j < n; ++j ) {
                b[i][j++] = k;
                b[i][j] = g;
            }
        else
            --i;
    }
    for ( k = 10, g = 9; i < 90; ++i, --g ) {
        if ( g < 1 ) {
            --k;
            g = k - 1;
        }
        if ( k != g )
            for ( j = 0; j < n; ++j ) {
                b[i][j++] = k;
                b[i][j] = g;
            }
        else
            --i;
    }

    for ( i = 0; i < 90; ++i )
        for ( j = 0; j < n; ++j )
            if ( a[j] != b[i][j] )
                cnt[i] += c;

    int min = cnt[0];
    for ( i = 1; i < 90; ++i )
        min = ( min > cnt[i] ) ? cnt[i] : min;

    printf("%d\n", min);

    return 0;
}
