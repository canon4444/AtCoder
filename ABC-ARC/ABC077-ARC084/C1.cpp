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


    int ans = 0, a = 0, b = 0, c = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());


    vector<long long int> 
    for( int i = 0; i < N; ++i ){





    for( int i = a; i < N; ++i ){
        if( B[N-1] <= A[i] ) break; // 任意の上の段が 中の段の最大 以上 の場合
        for( int j = b; j < N; ++j ){
            if( C[N-1] <= B[j] ) break; // 任意の中の段が 下の段の最大 以上 の場合
            if( B[j] <= A[i] ) continue; // 上の段が 中の段 以上 の場合
            for( int k = c; k < N; ++k ){
                if( C[k] <= B[j] ) continue;
                else {
                    cout << A[i] << " " << B[j] << " " << C[k] << endl;
                    ans += N-k;
                    c = k;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
