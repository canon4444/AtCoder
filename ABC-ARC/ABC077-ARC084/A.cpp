#include <iostream>
using namespace std;

int main()
{
    char C[2][3];
    for( int i = 0; i < 2; ++i )
        for( int j = 0; j < 3; ++j )
            cin >> C[i][j];

    for( int i = 0, j = 2; i < 3; ++i, --j )
        if( C[0][i] != C[1][j] ){
            cout << "NO" << endl;
            return 0;
        }

    cout << "YES" << endl;

    return 0;
}
