#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 0;
    char S[10];

    while( scanf("%s", S) != EOF ){
        if( flag ) printf(" ");
        if( strcmp(S, "Left") == 0 ) printf("<");
        else if( strcmp(S, "Right") == 0 ) printf(">");
        else if( strcmp(S, "AtCoder") == 0 ) printf("A");
        flag = 1;
    }

    printf("\n");

    return 0;
}
