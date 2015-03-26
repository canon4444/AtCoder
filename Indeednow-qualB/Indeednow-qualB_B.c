#include <stdio.h>
#include <string.h> 
 
int strcmp_range(const char *s, const char *t, const int start, const int finish)
{
    int i = start, j = 0;
 
    while( t[j] ){
        if( s[i] != t[j] ) return 0;
        if( s[i+1] == '\0' ) i = 0;
        else ++i;
        ++j;
    }
 
    return 1;
}

int main()
{
    int i, j;
 
    char s[1001], t[1001];
    scanf("%s%s", s, t);

    size_t len_s = strlen(s), len_t = strlen(t);
 
    //sとtの文字数が異なれば必ず生成できない
    if( len_s != len_t ){
        printf("-1\n");
        return 0;
    }
 
    //sを操作しなくてもtと一致している
    if( strcmp(s, t) == 0 ){
        printf("0\n");
        return 0;
    }
 
    //1回目の操作移行で生成されるか否か
    for( i = (int)len_s-1, j = (int)len_s-2; i != -1; --i, --j ){
        if( strcmp_range(s, t, i, j) ){
            printf("%d\n", (int)len_s - i);
            return 0;
        }
    }
 
    printf("-1\n");
 
    return 0;
}
