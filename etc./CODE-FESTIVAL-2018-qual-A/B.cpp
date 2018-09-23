#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, A, B;
    cin >> N >> M >> A >> B;

    vector<int> L(M), R(M);
    for( int i = 0; i < M; ++i )
        cin >> L[i] >> R[i];

    vector<int> X(N);

    for( int i = 0; i < N; ++i )
        X[i] = B;

    for( int i = 0; i < M; ++i )
        for( int j = L[i]-1; j < R[i]; ++j )
            X[j] = A;

    int ans = 0;

    for( int i = 0; i < N; ++i )
        ans += X[i];

    cout << ans << endl;

    return 0;
}
