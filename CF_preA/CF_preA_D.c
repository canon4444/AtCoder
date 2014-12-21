#include <stdio.h>

int main()
{

    unsigned long long A, K;
    scanf("%lld%lld", &A, &K);

    unsigned long long B[10], C = A, D, E[10];

    unsigned long long i, j, k, kk;

    for ( i = 0; i < 10; ++i )
        B[i] = 0;
    while ( C ) {
        B[C%10] = 1;
        C /= 10;
    }
    for ( i = 0, k = 0; i < 10; ++i )
        if ( B[i] )
            ++k;

    if ( k <= K )
        printf("%lld\n", A - A);
    else {
        for ( i = 0; ; ++i ) {
            if ( i <= A ) {
                C = A - i;
                D = A + i;
                for ( j = 0; j < 10; ++j ) {
                    B[j] = 0;
                    E[j] = 0;
                }
                while ( C ) {
                    B[C%10] = 1;
                    C /= 10;
                    E[D%10] = 1;
                    D /= 10;
                }
                for ( j = 0, k = kk = 0; j < 10; ++j ) {
                    if ( B[j] )
                        ++k;
                    if ( E[j] )
                        ++kk;
                }
                if ( k <= K || kk <= K ) {
                    printf("%lld\n", i);
                    return 0;
                }
            } else {
                D = A + i;
                for ( j = 0; j < 10; ++j ) {
                    E[j] = 0;
                }
                while ( D ) {
                    E[D%10] = 1;
                    D /= 10;
                }
                for ( j = 0, kk = 0; j < 10; ++j ) {
                    if ( E[j] )
                        ++kk;
                }
                if ( kk <= K ) {
                    printf("%lld\n", i);
                    return 0;
                }
            }
        }
    }

    return 0;
}
