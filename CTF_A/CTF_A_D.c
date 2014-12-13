#include <stdio.h>

int main()
{
    int i, j;

    int N, Q;
    scanf("%d%d", &N, &Q);
    int a[Q], b[Q], s[Q], t[Q];
    for ( i = 0; i < Q; ++i ) scanf("%d%d%d%d", &a[i], &b[i], &s[i], &t[i]);

    int cost;
    int note[Q][N];
    for ( i = 0; i < Q; ++i ) for ( j = 0; j < N; ++j ) note[i][j] = 0;
    for ( i = 0; i < Q; ++i ) {
        cost = 0;
        //for ( j = 0; j < N; ++j ) note[j] = 0;
        for ( j = s[i]-1; j < t[i]-1; ++j ) note[i][j] = 1;
        for ( j = a[i]-1; j < b[i]-1; ++j ) note[i][j] = 0;
        for ( j = 0; j < N; ++j ) cost += note[i][j];
        printf("%d\n", cost * 100);
    }

    return 0;
}
