#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 1;
    bool flag = true;

    while( 1 ){
        // 2文字以下だと，その手番の人の負け
        if( s.length() < 3 ){
            if( ans == 1 ) cout << "Second" << endl;
            else cout << "First" << endl;
            return 0;
        }

        // 端と同じ文字から取っていく
        for( int i = 1; i < s.length()-1 && flag; ++i ){
            if( s[0] == s[i] || s[s.length()-1] == s[i] ){
                s.erase(s.begin() + i);
                flag = false;
            }
        }

        // 端と同じ文字がなく，取っていない場合は適当に取る
        if( flag )
            s.erase(s.begin() + 1);

        ans = ans == 1 ? 
    }
