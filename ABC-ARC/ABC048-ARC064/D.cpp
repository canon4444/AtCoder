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
        // 2文字以下の場合，その手番の人の負け
        if( s.length() < 3 ){
            if( ans == 1 ) cout << "Second" << endl;
            else cout << "First" << endl;
            return 0;
        }

        // まだ取れる文字があるかどうかチェック
        flag = false;
        for( int i = 1; i < s.length()-1; ++i ){
            if( s[i-1] != s[i+1] ){
                flag = true;
                break;
            }
        }

        // 取れる文字がない場合，その手番の人の負け
        if( !flag ){
            if( ans == 1 ) cout << "Second" << endl;
            else cout << "First" << endl;
            return 0;
        }

        // 端と同じ文字から取っていく
        for( int i = 1; i < s.length()-1; ++i ){
            if( s[0] == s[i] || s[s.length()-1] == s[i] ){ // 端と同じ文字
                if( s[i-1] != s[i+1] ){ // 取った後に文字が隣合わない
                    s.erase(s.begin() + i);
                    flag = false;
                    break;
                }
            }
        }

        // 端と同じ文字がなく，取っていない場合は適当に取る
        if( flag ){
            for( int i = 1; i < s.length()-1; ++i ){
                if( s[i-1] != s[i+1] ){ // 取った後に文字が隣合わない
                    s.erase(s.begin() + i);
                    break;
                }
            }
        }

        flag = true;
        ans = ans == 1 ? 2 : 1;
    }
    
    return 0;
}
