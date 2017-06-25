#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N+1);
    a[0] = -2;
    for( int i = 1; i < N+1; ++i ){
        cin >> a[i];
        if( a[i] == 2 ) a[0] = -1;
    }


    int ans = 0, p = 1, b = 1;
    for( int i = 0; i < N+1; ++i ){
        p = a[b];
        b = p;
        ++ans;
        if( b == 2 ){
            cout << ans << endl;
            return 0;
        }
    }


    cout << -1 << endl;


    return 0;
}
