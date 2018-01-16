#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;


    int stack = 0, ans = 0;
    int len = s.length();

    for( int i = 0; i < len; ++i ){
        if( s[i] == '2' ) ++stack;
        if( s[i] == '5' ) --stack;
        
        if( stack < 0 ){
            cout << -1 << endl;
            return 0;
        }

        if( ans < stack ) ans = stack;
    }

    if( stack != 0 ){
        cout << -1 << endl;
        return 0;
    }


    cout << ans << endl;

    return 0;
}
