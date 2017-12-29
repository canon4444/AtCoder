#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;


    if( s == t ){
        cout << "No" << endl;
    } else {
        int slen = s.length(), tlen = t.length();
        multiset<char> ss, tt;
        for( int i = 0; i < slen; ++i )
            ss.insert(s[i]);
        for( int i = 0; i < tlen; ++i )
            tt.insert(t[i]);
        
        int ans = -1;
        auto sitr = ss.begin();
        auto titr = tt.rbegin();
        int len = slen < tlen ? slen : tlen;
        for( int i = 0; i < len; ++i, ++sitr, ++titr ){
            //cout << *sitr << " " << *titr << endl;
            if( *sitr < *titr ){
                ans = 1;
                break;
            }
            if( *titr < *sitr ){
                ans = 0;
                break;
            }
        }
        
        if( ans == -1 ) ans = len == slen ? 1 : 0;

        if( ans ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}
