#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int get_sat(int *garden[], int y, int x, int a, int b, int c, int d);

int main()
{
    int N, K;
    cin >> N >> K;

    int a[1000], b[1000], c[1000], d[1000];
    for( int i = 0; i < K; ++i )
        cin >> a[i] >> b[i] >> c[i] >> d[i];


    srand(time(0));


    int y[10][1000], x[10][1000], sat[10];
    int ansy[1000], ansx[1000];
    int garden[40][40] = { { 0 } };
    for( int i = 0; i < 10; ++i ){
        for( int j = 0; j < K; ++j ){
            y[i][j] = rand()%41 - 1;
            x[i][j] = rand()%41 - 1;
        }
    }

    for( int i = 0; i < K; ++i ){
        for( int j = 0; j < 10; ++j ){
            sat[j] = get_sat(graden, y[j][i], x[j][i], a[i], b[i], c[i], d[i]);
        }
        int max = 0;
        if( sat[max] < sat[j] ) max = j;
        ansy[i] = y[max][i];
        ansx[i] = x[max][i];
        garden[y[max][i]][x[max][i]] = (garden[y[max][i]][x[max][i]] + 1) % 2;
    }




    for( int i = 0; i < K; ++i ){
        cout << y[i] << " " << x[i] << endl;
    }


    return 0;
}


int get_sat(int *garden[], int y, int x, int a, int b, int c, int d)
{
    int field[40][40];
    for( int i = 0; i < 40; ++i )
        for( int j = 0; j < 40; ++j )
            field[i][j] = garden[i][j];

    field[y][x] = (field[y][x] + 1) % 2;

    if( field[a][b] == 1 || field[c][d] == 1 ) return 0;

    int sat = 1;
    int ny = a, nx = b;
    int used[40][40] = { { 0 } };
    vector<pair<int, int>> axis;
    while( 1 ){
        if( ny == c && nx == d ){
            ++sat;
            break;
        }

        used[ny][nx] = sat;

        
    }

    return (sat-1)*(sat-1);
}
