#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int y = stoi(S.substr(0, 4)),
        m = stoi(S.substr(5, 2)),
        d = stoi(S.substr(8, 2));

    if( y < 2019 ) cout << "Heisei" << endl;
    else if( 2019 < y ) cout << "TBD" << endl;
    else {
        if( m < 4 ) cout << "Heisei" << endl;
        else if( 4 < m ) cout << "TBD" << endl;
        else {
            if( d <= 30 ) cout << "Heisei" << endl;
            else cout << "TBD" << endl;
        }
    }

    return 0;
}
