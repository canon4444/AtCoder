#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;


    long long int len = s.length();
    if( len == 1 ){
        cout << 0 << endl;
        return 0;
    }


    long long int ans = 0;
/*
    string sub = s;
    while( sub.find("x") != string::npos ) sub.erase(sub.begin()+sub.find("x"));
    long long int sublen = sub.length();
    for( int i = 0, j = sublen-1; i < j; ++i, --j ){
        if( sub[i] != sub[j] ){
            cout << -1 << endl;
            return 0;
        }
    }

    for( int i = 0, j = len-1; i < j; ++i, --j ){
        if( s[i] == s[j] ) continue;
        else if( s[i] == 'x' ){ ++ans; ++j; }
        else if( s[j] == 'x' ){ ++ans; --i; }
    }
*/
    for( int i = 0, j = len-1; i < j; ++i, --j ){
        if( s[i] == s[j] ) continue;
        else if( s[i] == 'x' ){ ++ans; ++j; }
        else if( s[j] == 'x' ){ ++ans; --i; }
        else { cout << -1 << endl; return 0; }
    }


    cout << ans << endl;

    return 0;
}
