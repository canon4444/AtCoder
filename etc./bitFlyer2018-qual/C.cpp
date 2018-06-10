#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    int N, D;
    cin >> N >> D;

    vector<int> X(N);
    for( int i = 0; i < N; ++i )
        cin >> X[i];

    int ans = 0;
    
    vector<int> railway(N);
    for( int i = 0; i < N; ++i ){
        for( int j = i+1; j < N; ++j ){
            if( D < abs(X[i]-X[j]) ){
                railway[i] = j;
                break;
            }
        }
    }

    for( int i = 0; i < N; ++i ){
        for( int j = i+1; j < N; ++j ){
            if( D < abs(X[i]-X[j]) ) break;

            int k = railway[i] < j+1 ? j+1 : railway[i];

            if( D < abs(X[j]-X[k]) ) break;

            ans += N - k;
            cout << i << " " << j << " " << k << " : " << N-k << endl;
        }
    }

    cout << ans << endl;
    return 0;
}
