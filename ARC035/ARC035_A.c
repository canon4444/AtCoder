#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;

    char s[1001];
    scanf("%s", s);

    int len = strlen(s);
    for( i = 0, j = len-1; i < len/2+1; ++i, --j ){
        if( s[i] != '*')
            if( s[j] != '*' && s[i] != s[j] ){
                printf("NO\n");
                return 0;
            }
    }

    printf("YES\n");

    return 0;
}
