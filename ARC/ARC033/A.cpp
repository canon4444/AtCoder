#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans = 0;
    for( int i = 0; i < N; ++i ){
        for( int j = 0; j < N; ++j ){
            if( i < N-j ) ++ans;
            // cout << i << " : " << ans << endl;
        }
    }

    cout << ans << endl;

    return 0;
}
