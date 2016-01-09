#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;

    char s[301];
    int k;
    scanf("%s%d", s, &k);

    int len = (int)strlen(s), ans = 0;
    if( len < k ) ans = 0;
    else if( len == k ) ans = 1;
    else { //パスワードの個数が未知
        int n = len-k+1;
        char memo[n][k+1];
        for( i = 0; i < n; ++i ){ //列挙
            for( j = 0; j < k; ++j ){
                memo[i][j] = s[i+j];
            }
            memo[i][j] = '\0';
        }

        for( i = 0; i < n; ++i ){ //重複チェック
            int flag = 1;
            for( j = i-1; -1 < j; --j ){
                if( strcmp(memo[i], memo[j]) == 0 ) flag = 0;
            }
            if( flag ) ++ans;
        }
    }

    printf("%d\n", ans);

    return 0;
}
