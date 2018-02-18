#include <iostream>
using namespace std;

int main()
{
    int c[3][3];
    for( int i = 0; i < 3; ++i )
        for( int j = 0; j < 3; ++j )
            cin >> c[i][j];


    int a[3] = { 0 }, b[3] = { 0 };
    for( int i = 0; i < 100; ++i ){
        a[0] = i;
        b[0] = c[0][0] - a[0];
        b[1] = c[0][1] - a[0];
        b[2] = c[0][2] - a[0];

        for( int j = 0; j < 100; ++j ){
            a[1] = j;
            if( a[1]+b[0] == c[1][0] && a[1]+b[1] == c[1][1] && a[1]+b[2] == c[1][2] ) ;
            else continue;

            for( int k = 0; k < 100; ++k ){
                a[2] = k;
                if( a[2]+b[0] == c[2][0] && a[2]+b[1] == c[2][1] && a[2]+b[2] == c[2][2] ){
                    cout << "Yes" << endl;

                    //cout << a[0] << " " << a[1] << " " << a[2] << endl;
                    //cout << b[0] << " " << b[1] << " " << b[2] << endl;
                    return 0;
                } else continue;
            }
        }
    }


    cout << "No" << endl;

    return 0;
}
