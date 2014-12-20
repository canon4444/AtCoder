#include <stdio.h>

int main()
{
    double m; scanf("%lf", &m);

    m /= 1000;
    if ( m < 0.1 ) m = 0;
    else if ( 0.1 <= m && m <= 5 ) m *= 10;
    else if ( 6 <= m && m <= 30 ) m += 50;
    else if ( 35 <= m && m <= 70 ) m = ((m - 30) / 5 + 80);
    else if ( 70 < m ) m = 89;

    printf("%02.0f\n", m);

    return 0;
}
