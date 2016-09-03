#include <stdio.h>
#include <string.h>


int main()
{
    int i;


    char S[101];
    int A, B, C, D;
    scanf("%s", S);
    scanf("%d%d%d%d", &A, &B, &C, &D);


    int len = strlen(S);
    for( i = 0; i < len+1; ++i ){
        if( i == A || i == B || i == C || i == D ) printf("\"");
        if( i < len ) printf("%c", S[i]);
    }
    printf("\n");


    return 0;
}
