/* こたつのうえにあるみかんせい */

#include <stdio.h>
#include <string.h>

int strnmcmp(const char *str, const char *dst, const int start, const int num)
{
    int i, j;
    int n = start + num;

    for( i = start, j = 0; j < n; ++i, ++j )
        if( str[i] != dst[j] ) return 0;

    return 1;
}

int main()
{
    int i, j;

    char X[1000], S[1000], T[1000];
    scanf("%s%s%s", X, S, T);
/*
    int x = strlen(X), s = strlen(S), t = strlen(T);
    int memo[x], sum = 0;
    //char *first = strcat(S, T), *second = strcat(T, S);
    //printf("X:%s S:%s T:%s 1st:%s 2nd:%s\n", X, S, T, first, second);
    for( i = 0; i < x; ++i ) memo[i] = 0;
    for( i = 0; i < x; ++i ){
        //memo[i] += strncmp(&X[i], first, s+t);
        //memo[i] += strncmp(&X[i], second, t+s);
        sum += strncmp(&X[i], first, s+t);
        sum += strncmp(&X[i], second, t+s);
        sum %= 1000000007;
        //if( 0 < i ) memo[i+1] = (memo[i] + memo[i-1]) % 1000000007;
    }

    //for( i = 0; i < x+1; ++i ) printf("memo[%d]: %d\n", i, memo[i]);
    //printf("%d\n", memo[x]);
    printf("%d\n", sum%(s+t));
*/
    return 0;
}
