#include <stdio.h>

int main()
{
    int i, j;

    int N;
    scanf("%d%*c", &N);
    char s[N][N];
    for( i = 0; i < N; ++i ){
        for( j = 0; j < N; ++j ){
            scanf("%c", &s[i][j]);
            if( j == N-1 ) scanf("%*c");
        }
    }

    for( i = 0; i < N; ++i ){
        for( j = N-1; -1 < j; --j ){
            printf("%c", s[j][i]);
            if( j == 0 ) printf("\n");
        }
    }

    return 0;
}
