#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    long long int N, K;
    cin >> N >> K;

    vector<long long int> A(N);
    for( int i = 0; i < N; ++i )
        cin >> A[i];
 
    long long int ans = 0, tmp;
    for( int i = -1, k; ; ++i ){
        if( i == -1 ) k = 0; // 0 も見る
        if( i == 0 ) k = 1; // X = 2^k だけ見る
        else k *= 2;
        if( K < k ) break;

        tmp = 0;
        for( int j = 0; j < N; ++j ){
            tmp += k ^ A[j];
        }
        if( ans < tmp ) ans = tmp;
    }

    cout << ans << endl;

    return 0;
}
