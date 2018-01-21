#include <iostream>
using namespace std;

int main()
{
    long long int N;
    string S;
    cin >> N >> S;


    int len = (int)S.length();
    long long int ans = 0, k = 0;

    if( S[0] == 'A' && S[len-1] == 'A' ){
        long long int s = -1, e = -1;
        for( int i = 0; i < len; ++i )
            if( s == -1 && S[i] == 'B' ) s = i;
        for( int i = len-1; -1 < i; --i )
            if( e == -1 && S[i] == 'B' ) e = len - i - 1;

        if( s == -1 && e == -1 ){
            ans = (len*N*(1+len*N))/2;
            cout << ans << endl;
            return 0;
        }

        for( int i = s; i < len-e; ++i ){
            if( S[i] == 'A' ){
                ++k;
                ans += k;
            } else if( S[i] == 'B' ){
                k = 0;
            }
        }

        ans *= N;
        //cout << ans << " *" << endl;
        ans += (s*(1+s))/2; // 1回目の最初
        //cout << ans << " s" << endl;
        ans += (N-1) * ((e+s)*(1+e+s))/2; // 2〜N-1回目の間
        //cout << ans << " rep" << endl;
        ans += (e*(1+e))/2; // N回目の最後

    } else {
        for( int i = 0; i < len; ++i ){
            if( S[i] == 'A' ){
                ++k;
                ans += k;
            } else if( S[i] == 'B' ){
                k = 0;
            }
        }
        ans *= N;
    }


    cout << ans << endl;
    return 0;
}
