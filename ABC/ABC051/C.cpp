#include <iostream>
using namespace std;

int main()
{
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    // 1往復目
    //// 行き
    for( int i = 0; i < ty-sy; ++i ) cout << "U";
    for( int i = 0; i < tx-sx; ++i ) cout << "R";
    //// 帰り
    for( int i = 0; i < ty-sy; ++i ) cout << "D";
    for( int i = 0; i < tx-sx; ++i ) cout << "L";

    // 2往復目
    //// 行き
    cout << "LU";
    for( int i = 0; i < ty-sy; ++i ) cout << "U";
    for( int i = 0; i < tx-sx; ++i ) cout << "R";
    cout << "RD";
    //// 帰り
    cout << "RD";
    for( int i = 0; i < ty-sy; ++i ) cout << "D";
    for( int i = 0; i < tx-sx; ++i ) cout << "L";
    cout << "LU" << endl;

    return 0;
}
