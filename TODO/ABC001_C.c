// http://abc001.contest.atcoder.jp/tasks/abc001_3
//WA

#include <stdio.h>

int main()
{
    char ss[][4] = { "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
                     "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW",
                     "N", "C" };

    int st[] = { 1125, 3375, 5625, 7875, 10125, 12375, 14625,
                 16875, 19125, 21375, 23625, 25875, 28125, 30375, 32625,
                 34875, -1 };

    int su[] = { 0, 25, 155, 335, 545,
                 795, 1075, 1385, 1715, 2075,
                 2445, 2845, 3265, -1 };

    int i;
    for ( i = 0; -1 < su[i]; ++i )
        su[i] *= 6;

    int Deg, Dis, g;

    scanf("%d %d", &Deg, &Dis);
    Deg *= 10;
    Dis *= 10;

    for ( i = 0; -1 < st[i+1]; ++i )
        if ( st[i] <= Deg && Deg < st[i+1] ) {
            g = i;
            break;
        }

    for ( i = 0; -1 < su[i+1]; ++i )
        if ( su[i] <= Dis && Dis < su[i+1] )
            break;

    if ( i == 0 )
        g = 16;

    printf("%s %d\n", ss[g], i);

    return 0;
}
