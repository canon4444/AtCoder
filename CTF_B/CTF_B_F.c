#include <stdio.h>

int main()
{
    char *X, *S, *T;
    scanf("%s%*c%s%*c%s%*c", X, S, T);

    int x = strlen(X), s = strlen(S), t = strlen(T);
    int memo[x];
    for ( i = 0; i < x; ++i ) memo[i] = 0;
    for ( i = 0; i < s; ++i ) if ( X[i] == S[s] ) memo[j] = i;
    
    return 0;
}
