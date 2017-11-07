#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if( A+B+C != 17 ) cout << "NO" << endl;
    else {
        switch( A ){
        case 5:
            if( B == 5 ^ C == 5 ) cout << "YES" << endl;
            break;
        case 7:
            if( B == 5 ) cout << "YES" << endl;
            break;
        }
    }

    return 0;
}
