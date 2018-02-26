#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> C(N-1), S(N-1), F(N-1);
    for( int i = 0; i < N-1; ++i )
        cin >> C[i] >> S[i] >> F[i];


    int ans = 0;
    for( int i = 0; i < N; ++i ){
        for( int j = i; j < N-1; ++j ){
            if( ans < S[j] ) ans = S[j];
            if( ans%F[j] != 0 ) ans += F[j] - ans%F[j];
            ans += C[j];
            // cout << N << "(station#" << j << "): " << ans << endl;
        }
        cout << ans << endl;
        ans = 0;
    }


    return 0;
}
