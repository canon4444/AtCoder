#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long int> A(N), B(N), C(N);
    for( int i = 0; i < N; ++i )
        cin >> A[i];
    for( int i = 0; i < N; ++i )
        cin >> B[i];
    for( int i = 0; i < N; ++i )
        cin >> C[i];

    sort(A.begin(), A.end());
    // sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    int ans = 0;
    vector<long long int>::iterator max, min;
    int above, below;

    for( int i = 0; i < N; ++i ){
        // B[i]に対する上段を二分探索
        min = lower_bound(A.begin(), A.end(), B[i]);
        above = distance(A.begin(), min);

        // B[i]に対する下段を二分探索
        max = upper_bound(C.begin(), C.end(), B[i]);
        below = N - distance(C.begin(), max);

        ans += above * below;

        // cout << B[i] << " : " << above << ", " << below << endl;
    }

    cout << ans << endl;

    return 0;
}
