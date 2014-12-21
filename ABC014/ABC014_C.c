#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a[n], b[n];

    int i;

    for ( i = 0; i < n; ++i )
        scanf("%d%d", &a[i], &b[i]);

    int line[1000001] = { 0 }, sum[1000001] = { 0 }, max = 0;

    for ( i = 0; i < n; ++i ) {
        ++line[a[i]];
        --line[b[i]+1];
    }

    for ( i = 0; i < 1000001; ++i ) {
        if ( i == 0 ) sum[i] = line[i];
        else sum[i] = line[i] + sum[i-1];
        if ( max < sum[i] ) max = sum[i];
    }

    printf("%d\n", max);

    return 0;
}
