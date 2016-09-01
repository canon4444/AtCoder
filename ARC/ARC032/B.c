#include <stdio.h>

int hash(int *h, int n)
{
    if( h[n] ) n = hash(h, h[n]);
    return n;
}

int main()
{
    int i;


    int N, M; scanf("%d%d", &N, &M);
    int a[M], b[M];
    for( i = 0; i < M; ++i ) scanf("%d%d", &a[i], &b[i]);


    int hsh[N], n, sum = 0;
    for( i = 0; i < N; ++i ) hsh[i] = 0;

    for( i = 0; i < M; ++i ){
        n = hash(hsh, a[i]-1);
        if( n != b[i] - 1 ) hsh[n] = b[i] - 1;
    }

    for( i = 0; i < N; ++i ){ //printf("%d ", hsh[i]);
        if( !hsh[i] ) ++sum;
    }
    
    printf("%d\n", sum-1);

    return 0;
}
