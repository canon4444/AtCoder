#include <stdio.h>
#include <string.h>

int main()
{
    int i;

    char s[1001];
    scanf("%s", s);

    int len = strlen(s), cnt;
    char strg;
    for( i = 0; i < len; ){
        strg = s[i];
        cnt = 0;
        while( strg == s[i] ) ++cnt, ++i;
        printf("%c%d", strg, cnt);
    }
    printf("\n");

    return 0;
}
