#include <stdio.h>

int main()
{
    int i;

    char S[51];
    scanf("%s", S);

    int flag = 1;
    for( i = 0; S[i] && flag; ++i )
        switch( S[i] ){
        case 'c': if( S[i+1] == 'h' ) ++i; else flag = 0; break;
        case 'o': case 'k': case'u': break;
        default: flag = 0; break;
        }

    if( flag ) printf("YES\n");
    else printf("NO\n");

    return 0;
}
