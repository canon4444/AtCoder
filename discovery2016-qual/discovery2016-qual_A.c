#include <stdio.h>
#include <string.h>


int main()
{
    int i;
    char w[] = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
    int len = (int)strlen(w);


    int W;
    scanf("%d", &W);


    for( i = 0; i < len; ++i ){
        printf("%c", w[i]);
        if( (i+1) % W == 0 && i != len-1 ) printf("\n");
    }
    printf("\n");


    return 0;
}
