#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, j;
 
    int N;
    scanf("%d%*c", &N);
    char S[N];
    scanf("%s", S);
 
    int len = 0;
    char name[100];
    name[0] = 'b';
    ++len;
 
    for( i = 1; len < N; ++i ){
        switch( i % 3 ){
        case 1:
            for( j = len; 0 < j; --j )
                name[j] = name[j-1];
            name[0] = 'a';
            ++len;
            name[len] = 'c';
            ++len;
            break;
        case 2:
            for( j = len; 0 < j; --j )
                name[j] = name[j-1];
            name[0] = 'c';
            ++len;
            name[len] = 'a';
            ++len;
            break;
        case 0:
            for( j = len; 0 < j; --j )
                name[j] = name[j-1];
            name[0] = 'b';
            ++len;
            name[len] = 'b';
            ++len;
            break;
        }
    }
 
    name[len] = '\0';
 
    //printf("%s\n", name);
 
    if( strcmp(name, S) == 0 ) printf("%d\n", i-1);
    else printf("-1\n");
 
    return 0;
}
