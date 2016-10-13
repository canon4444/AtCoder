#include <iostream>
#include <string>
#include <cmath>
 
 
using namespace std;
 
 
int main()
{
    string S;
    cin >> S;
 
    int T;
    cin >> T;
 
 
    int len = S.length(), cnt = 0;
    int x = 0, y = 0;
 
    for( int i = 0; i < len; ++i ){
        char ch = S.c_str()[i];
        switch( ch ){
            case 'L': --x; break;
            case 'R': ++x; break;
            case 'U': ++y; break;
            case 'D': --y; break;
            case '?': ++cnt; break;
        }
    }

    
    int ans = fabs(x) + fabs(y); //正の数
    if( T == 1 ) cout << ans+cnt << endl;
    if( T == 2 ){
        if( -1 < ans-cnt ) cout << fabs(ans-cnt) <<endl;
        else {
            cnt -= ans;
            cout <<fabs(cnt%2) << endl;
        }
        //if( fabs(ans-cnt) < fabs(ans-cnt%2) ) cout << fabs(ans-cnt) <<endl;
        //else cout <<fabs(ans-cnt%2) << endl;
    }
    
    
    return 0;
}
