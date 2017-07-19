#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, P;
    cin >> N >> P;

    int t, ar[2] = { 0 };
    for( int i = 0; i < N; ++i ){
        cin >> t;
        ++ar[t%2];
    }


    long long int ans = 0;

    if( ar[1] == 0 ){
        if( P == 0 ) ans = pow(2, N);
        else if( P == 1 ) ans = 0;
    } else if( 0 < ar[1] ){
        long long int others = pow(2, N-1), S = ar[0]+ar[1]-1;
        for( int i = 0; i < ar[1]; ++i ){
            if( S%2 == 1 ) ;
            else if( S%2 == 0 ) ;
        }
        ans = others;
    }

    cout << ans << endl;

    return 0;
}
