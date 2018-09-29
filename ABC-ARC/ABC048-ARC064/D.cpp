#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 1;
    int len;

    while( 1 ){
        len = s.length();

        // 2文字以下だと，その手番の人の負け
        if( len < 3 ){
            if( ans == 1 ) cout << "Second" << endl;
            else cout << "First" << endl;
            return 0;
        }

        // 端と同じ文字から取っていく
        for( int i = 1; i < len-1; ++i ){
            if( s[0] == s[i] || s[len-1] == s[i] ){
                s.erase(s.begin() + i);
            } else {
            }
        }
