#include <stdio.h>
#include <math.h>

/*
double round_(double x)
{
    if( x < 0 ) return -1 * floor(-x + 0.5);
    else return floor(x + 0.5);
}
*/
double round_(double x)
{
    x *= 10;
    return floor(x + 0.5) / 10;
}

int main()
{
    //入力
    double Deg, Dis;
    scanf("%lf%lf", &Deg, &Dis);
    Deg *= 10;
    Dis /= 60;
    Dis = round_(Dis);

    //にゃん
    char Dir[4];
    int W;

    if( 1125 <= Deg && Deg < 3375 ) sprintf(Dir, "NNE");
    else if( 3375 <= Deg && Deg < 5625 ) sprintf(Dir, "NE");
    else if( 5625 <= Deg && Deg < 7875 ) sprintf(Dir, "ENE");
    else if( 7875 <= Deg && Deg < 10125 ) sprintf(Dir, "E");
    else if( 10125 <= Deg && Deg < 12375 ) sprintf(Dir, "ESE");
    else if( 12375 <= Deg && Deg < 14625 ) sprintf(Dir, "SE");
    else if( 14625 <= Deg && Deg < 16875 ) sprintf(Dir, "SSE");
    else if( 16825 <= Deg && Deg < 19125 ) sprintf(Dir, "S");
    else if( 19125 <= Deg && Deg < 21375 ) sprintf(Dir, "SSW");
    else if( 21375 <= Deg && Deg < 23625 ) sprintf(Dir, "SW");
    else if( 23625 <= Deg && Deg < 25875 ) sprintf(Dir, "WSW");
    else if( 25875 <= Deg && Deg < 28125 ) sprintf(Dir, "W");
    else if( 28125 <= Deg && Deg < 30375 ) sprintf(Dir, "WNW");
    else if( 30375 <= Deg && Deg < 32625 ) sprintf(Dir, "NW");
    else if( 32625 <= Deg && Deg < 34875 ) sprintf(Dir, "NNW");
    else sprintf(Dir, "N");

    if( 0 <= Dis && Dis <= 0.2 ) W = 0, sprintf(Dir, "C");
    else if( 0.3 <= Dis && Dis <= 1.5 ) W = 1;
    else if( 1.6 <= Dis && Dis <= 3.3 ) W = 2;
    else if( 3.4 <= Dis && Dis <= 5.4 ) W = 3;
    else if( 5.5 <= Dis && Dis <= 7.9 ) W = 4;
    else if( 8.0 <= Dis && Dis <= 10.7 ) W = 5;
    else if( 10.8 <= Dis && Dis <= 13.8 ) W = 6;
    else if( 13.9 <= Dis && Dis <= 17.1 ) W = 7;
    else if( 17.2 <= Dis && Dis <= 20.7 ) W = 8;
    else if( 20.8 <= Dis && Dis <= 24.4 ) W = 9;
    else if( 24.5 <= Dis && Dis <= 28.4 ) W = 10;
    else if( 28.5 <= Dis && Dis <= 32.6 ) W = 11;
    else if( 32.7 <= Dis ) W = 12;

    //出力
    printf("%s %d\n", Dir, W);

    return 0;
}
