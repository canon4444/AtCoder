#include <stdio.h>
#include <string.h>

void f(int rest, char *s, int n)
{
    if( rest == 0 ){
        printf("%s\n", s);
    } else {
        char c;
        for( c = 'a'; c <= 'c'; ++c ){
            char new_s[9] = { 0 };
            strcpy(new_s, s);
            new_s[n-1] = c;
            f(rest-1, new_s, n+1);
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    f(N, "", 1);

    return 0;
}
