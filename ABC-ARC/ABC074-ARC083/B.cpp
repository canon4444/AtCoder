#include <iostream>
using namespace std;


int min(int a, int b)
{
    if( a < b ) return a;
    else return b;
}


int main()
{
    int N, K;
    int x[100];
    cin >> N >> K;
    for( int i = 0; i < N; ++i ) cin >> x[i];

    int ans = 0;
    for( int i = 0; i < N; ++i ){
        ans += 2*min(x[i], K-x[i]);
    }

    cout << ans << endl;

    return 0;
}
