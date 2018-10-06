#include <iostream>
using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;

    int c[100] = { 0 }, t[100] = { 0 };
    for( int i = 0; i < N; ++i )
        cin >> c[i] >> t[i];

    int ans = 1001;
    for( int i = 0; i < N; ++i )
        if( t[i] <= T && c[i] < ans ) ans = c[i];

    if( ans != 1001 ) cout << ans << endl;
    else cout << "TLE" << endl;

    return 0;
}
