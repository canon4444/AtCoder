#include <stdio.h>

typedef enum { south, west, north, east } news;

int main()
{
    int i;

    int R, C, M, N;
    scanf("%d%d%d%d", &R, &C, &M, &N);
    int r[2][N], c[2][N];
    for ( i = 0; i < N; ++i ) scanf("%d%d%d%d", &r[0][i], &r[1][i], &c[0][i], &c[1][i]);

    news moai[R][C];
    for ( i = 0; i < R; ++i ) for ( j = 0; j < C; ++j ) moai[i][j] = south;
//いもす法？
    for ( i = 0; i < N; ++i ) for ( j = 0; j < C; ++j ) moai[i][j] = (moai + imos[][]) % 4;

    printf("%d\n", );

    return 0;
}
