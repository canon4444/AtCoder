#include <stdio.h>

typedef struct {
    int num;
    int can;
} machine;

int main()
{
    int i, j;

    int N;
    scanf("%d", &N);

    machine A[3];
    for ( i = 0; i < 3; ++i ) {
        scanf("%d", &A[i].num);
        A[i].can = 0;
    }

    for ( i = 0; i < 3; ++i ) {
        for ( j = i+1; j < 3; ++j ) {
            if ( A[i].num < A[j].num ) {
                int tmp = A[i].num;
                A[i].num = A[j].num;
                A[j].num = tmp;
            }
        }
    }

    int flag = 1;
    int sum = 0, time = 0;

    while ( flag ) {
        for ( i = 0; i < 3; ++i ) {
            if ( 0 == A[i].can ) {
                sum += A[i].num;
                ++time;
                if ( N <= sum ) break;
                A[i].can = 2;
            } else {
                --A[i].can;
            }
        }
        if ( N <= sum ) {
            flag = 0;
        }
    }

    printf("%d\n", time);

    return 0;
}
