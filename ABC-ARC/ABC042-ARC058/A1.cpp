#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int ans = 0;
    if( A+B+C == 17 ){
        switch( A ){
        case 5:
            if( B == 5 ^ C == 5 ) ans = 1;
            break;
        case 7:
            if( B == 5 ) ans = 1;
            break;
        }
    }

    if( ans ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
