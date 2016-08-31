#include <stdio.h>

int main()
{
    char S[101];
    scanf("%s", S);

    int i;
    for ( i = 0; S[i]; ++i )
        if ( (S[i] == 'i') | (S[i] == 'I') )
            for ( ; S[i]; ++i )
                if ( (S[i] == 'c') | (S[i]== 'C') )
                    for ( ; S[i]; ++i )
                        if ( (S[i] == 't') | (S[i] == 'T') ) {
                            printf("YES\n");
                            return 0;
                        }
    printf("NO\n");

    return 0;
}
