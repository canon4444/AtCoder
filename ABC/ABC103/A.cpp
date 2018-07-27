#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int A[3];
    cin >> A[0] >> A[1] >> A[2];

    int ans = 0;
    if( A[1] < A[0] && A[2] < A[0] ){
        if( A[1] < A[2] )
            ans = abs(A[0]-A[2]) + abs(A[2]-A[1]);
        else
            ans = abs(A[0]-A[1]) + abs(A[1]-A[2]);
    } else if( A[0] < A[1] && A[2] < A[1] ){
        if( A[0] < A[2] )
            ans = abs(A[1]-A[2]) + abs(A[2]-A[0]);
        else
            ans = abs(A[1]-A[0]) + abs(A[0]-A[2]);
    } else {
        if( A[0] < A[1] )
            ans = abs(A[2]-A[1]) + abs(A[1]-A[0]);
        else
            ans = abs(A[2]-A[0]) + abs(A[0]-A[1]);
    }

    cout << ans << endl;

    return 0;
}
