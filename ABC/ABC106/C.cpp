#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    long long int K;
    cin >> K;

    int one = 0;

    for( int i = 0; i < s.length(); ++i ){
        if( s[i] == '1' ) ++one;
        else break;
    }

    if( K <= one ) cout << 1 << endl;
    else cout << s[one] << endl;

    return 0;
}
