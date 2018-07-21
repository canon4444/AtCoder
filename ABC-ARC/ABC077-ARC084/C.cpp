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

    vector<long long int> a(N), c(N);
    for( int i = 0; i < N; ++i ){
        a[i] = 0;
        for( int j = 0; j < N; ++j ){
            if( A[i] < B[j] ){
                a[i] = N - j;
                break;
            }
        }
    }
    for( int i = 0; i < N; ++i ){
        b[i] = 0;
        for( int j = N-b[i]-1; j < N; ++j ){
            if( B[i] < C[j] ){
                b[i] -= j + 1;
                break;
            }
        }
    }    
    /*
    cout << "----" << endl;
    for( int i = 0; i < N; ++i ) cout << a[i] << " ";
    cout << endl;
    for( int i = 0; i < N; ++i ) cout << b[i] << " ";
    cout << endl;
    cout << "----" << endl;
    */
    for( int i = 0; i < N; ++i )
        for( int j = N-a[i]; j < N; ++j ){
            ans += b[j];

    cout << ans << endl;

    return 0;
}
