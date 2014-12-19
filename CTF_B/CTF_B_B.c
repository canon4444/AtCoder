#include <stdio.h>

int main()
{
    int i;

    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);

    int max = 0;
    for ( i = 0; i < 4; ++i )
        switch ( i ) {
        case 0: max = max < (A + B) + C ? (A + B) + C : max; break;
        case 1: max = max < (A + B) * C ? (A + B) * C : max; break;
        case 2: max = max < (A * B) + C ? (A * B) + C : max; break;
        case 3: max = max < (A * B) * C ? (A * B) * C : max; break;
        default: break;
        }

    printf("%d\n", max);

    return 0;
}

/* 要実行
max = (A + B) < (A * B) ? A * B : A + B;
max = (max + C) < (max * C) ? max * C : max + C;
*/
