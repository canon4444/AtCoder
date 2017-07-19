#include <iostream>
#include <set>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    if( H < W ) H ^= W ^= H;

    if( H%3 == 0 )


    int max = 0, min = 10000000;

    
    /*
    set<long long int> t;
    for( int i = H/3; i < H; ++i ){
        for( int j = W/3; j < W; ++j ){
            t.insert((i+1)*(j+1));
        }
    }

    for( auto itr = t.begin(); itr != t.end(); ++itr ){
        cout << *itr << endl;
    }
    */


    long long int x, y, z, amari = 0;
    x = H*W/3;
    y = (H*W - x)/2;
    z = H*W - x - y;

//ここに長方形かどうかの判定を入れる
/*
    x = x%H;
    y = y%H;
    z = z%H;
*/  

    if( max < x ) max = x;
    if( max < y ) max = y;
    if( max < z ) max = z;

    if( x < min ) min = x;
    if( y < min ) min = y;
    if( z < min ) min = z;

    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
    cout << "z:" << z << endl;

    cout << max - min << endl;


    return 0;
}
