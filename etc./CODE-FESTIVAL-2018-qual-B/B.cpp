#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;

    int a[100] = { 0 }, b[100] = { 0 };
    for( int i = 0; i < N; ++i )
        cin >> a[i] >> b[i];

    int b_max = 0;
    for( int i = 1; i < N; ++i )
        if( b[b_max] < b[i] ) b_max = i;

    int ans = 0;
    for( int i = 0; i < N; ++i ){
        if( i != b_max ) ans += a[i] * b[i];
        else ans += (a[i]+X) * b[i];
    }

    cout << ans << endl;

    return 0;
}
