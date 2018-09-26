#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 1;
    int len;

    while( 1 )
        len = s.length();

        if( len < 3 ){
            if( ans == 1 ) cout << "Second" << endl;
            else cout << "First" << endl;
            return 0;
        }

        for( int i = 1; i < len-1; ++i ){
            if( s[0] == s[i] ){
            }
