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

    int ans = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    vector<long long int> b(N), c(N);
    for( int i = 0; i < N; ++i ){
        b[i] = 0;
        for( int j = 0; j < N; ++j ){
            if( B[i] < A[j] ){
                b[i] += j;
                break;
            }
        }
        if( A[N-1] < B[i] ) b[i] += N;
    }
    for( int i = 0; i < N; ++i ){
        c[i] = 0;
        for( int j = 0; j < N; ++j ){
            if( C[i] < B[j] ){
                c[i] += j;
                break;
            }
        }
        if( B[N-1] < C[i] ) c[i] += N;
    }


    for( int i = 0; i < N; ++i ) cout << b[i] << " ";
    cout << endl;
    for( int i = 0; i < N; ++i ) cout << c[i] << " ";
    cout << endl;

    for( int i = 0; i < N; ++i )
        for( int j = 0; j < N; ++j )
            if( A[i] < B[j] )
                ans += b[i] * c[j];

    cout << ans << endl;

    return 0;
}
