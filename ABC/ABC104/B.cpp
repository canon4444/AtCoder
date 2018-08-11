#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int len = (int)S.length();
    int cnt = 0, p = 0;
    bool ans = true;

    if( S[0] == 'A' ){
        for( int i = 2; i < len-1; ++i )
            if( S[i] == 'C' ){
                ++cnt;
                p = i;
            }

        if( cnt == 1 ){
            for( int i = 1; i < len; ++i )
                if( i != p && 'A' <= S[i] && S[i] <= 'Z' )
                    ans = false;
        } else ans = false;
    } else ans = false;

    if( ans ) cout << "AC" << endl;
    else cout << "WA" << endl;

    return 0;
}
