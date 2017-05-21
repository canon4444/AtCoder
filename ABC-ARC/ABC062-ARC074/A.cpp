#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    switch( x ){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: x = 0; break;
    case 2: x = 2; break;
    default: x = 1;
    }

    switch( y ){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: y = 0; break;
    case 2: y = 2; break;
    default: y = 1;
    }

    if( x == y ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
