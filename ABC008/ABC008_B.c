#include <stdio.h>
#include <string.h>

typedef struct {
    char name[51];
    int num;
} table;

int main()
{
    int i, j;

    int N;
    scanf("%d", &N);
    char S[N][51];
    for( i = 0; i < N; ++i )
        scanf("%s", S[i]);

    int max;
    table table[N];
    for( i = 0; i < N; ++i ){
        strcpy(table[i].name, "");
        table[i].num = 0;
    }

    for( i = 0; i < N; ++i )
        for( j = 0; j < N; ++j )
            if( !strcmp(table[j].name, S[i]) ){
                ++table[j].num;
                break;
            } else if( !strcmp(table[j].name, "") ){
                strcpy(table[j].name, S[i]);
                ++table[j].num;
                break;
            }

    for( i = 0, max = 0; i < N; ++i )
        max = table[max].num < table[i].num ? i : max;

    printf("%s\n", table[max].name);

    return 0;
}
