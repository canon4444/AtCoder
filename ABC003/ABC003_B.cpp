#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char S[11], T[11];
    cin >> S >> T;

    int len = (int)strlen(S);

    int ans = 1;
    for( int i = 0; i < len && ans; ++i ){
        if( S[i] == '@' ){
            if( T[i] == '@' ) continue;
            else {
                switch( T[i] ){
                    case 'a': case 't': case 'c': case 'o': case 'd': case 'e': case 'r': break;
                    default: ans = 0; break;
                }
            }
        } else {
            if( T[i] == '@' ){
                switch( S[i] ){
                    case 'a': case 't': case 'c': case 'o': case 'd': case 'e': case 'r': break;
                    default: ans = 0; break;
                }
            } else {
                if( S[i] != T[i] ) ans = 0;
            }
        }
    }

    if( ans ) cout << "You can win" << endl;
    else cout << "You will lose" << endl;

    return 0;
}
