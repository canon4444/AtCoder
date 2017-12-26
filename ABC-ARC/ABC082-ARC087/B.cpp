#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int len = s.length();
    set<char> ss, tt;
    for( int i = 0; i < len; ++i )
        ss.insert(s[i]);
    len = t.length();
    for( int i = 0; i < len; ++i )
        tt.insert(t[i]);

    int ans = 1;
    for( auto sitr = ss.begin(), titr = tt.begin(); ; ++sitr, ++titr ){
        if( sitr == ss.end() || titr == tt.end() ) break;
        if( *titr < *sitr ){
            ans = 0;
            break;
        }

    if( s.length() == t.length() ){
