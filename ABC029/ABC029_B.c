#include <stdio.h>

int main()
{
    int i, j;

    char S[12][11];
    for( i = 0; i < 12; ++i ){
        scanf("%s", S[i]);
    }

    int cnt = 0;
    for( i = 0; i < 12; ++i ){
        for( j = 0; S[i][j] != '\0'; ++j ){
            if( S[i][j] == 'r' ){
                ++cnt;
                break;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}
