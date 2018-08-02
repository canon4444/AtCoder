#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int A[300000] = { 0 };
    for( int i = 0; i < N; ++i )
        cin >> A[i];

    int ans = 0;
    int B[300000] = { 0 };

    B[0] = A[0] < A[1] ? 2 : 1;

    for( int i = 1; i < N; ++i ){
        if( i != N-1 ){
            if( A[i] < A[i+1] )
                B[i] = B[i-1] + 1;
            else
                B[i] = 1;
        } else {
            B[i] = 1;
        }
    }

/*
    for( int i = 0; i < N; ++i )
        cout << i << " : " << B[i] << endl;
    cout << "----" << endl;
*/

    for( int i = 0; i < N; ++i )
        if( K <= B[i] ) ++ans;

    cout << ans << endl;

    return 0;
}
