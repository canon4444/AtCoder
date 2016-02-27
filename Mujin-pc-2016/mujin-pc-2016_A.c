#include <stdio.h>

int main()
{
    int c = getchar();

    switch( c ){
    case 'O': case 'P': case 'K': case 'L':
        printf("Right\n");
        break;
    default:
        printf("Left\n");
        break;
    }

    return 0;
}
