#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char S[11];
    cin >> S;
    
    int ans = 0;
    int len = strlen(S);
    for( int i = 0; i < len; ++i ){
        if( '0' <= S[i] && S[i] <= '9' ){
            if( ans != 0 ) ans *= 10;
            ans += S[i]-'0';
        }
    }
    
    cout << ans << endl;

    return 0;
}
