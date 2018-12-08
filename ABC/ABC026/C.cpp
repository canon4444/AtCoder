#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> B(N, 0);
    for( int i = 1; i < N; ++i )
        cin >> B[i];

    int A[20][3] = { { 0 } }; // 給料，MAX, MIN
    for( int i = 0; i < N; ++i )
        A[i][0] = 1;

    for( int i = N-1; 0 < i; --i ){
        // MAXの更新
        if( A[B[i]-1][1] == 0 ) A[B[i]-1][1] = A[i][0];
        else A[B[i]-1][1] = max(A[B[i]-1][1], A[i][0]);
        // MINの更新
        if( A[B[i]-1][2] == 0 ) A[B[i]-1][2] = A[i][0];
        else A[B[i]-1][2] = min(A[B[i]-1][2], A[i][0]);
        // 給料の更新
        A[B[i]-1][0] = A[B[i]-1][1] + A[B[i]-1][2] + 1;
        // cout << "B" << B[i] << "の給料: " << A[B[i]-1][0] << endl;
    }

    cout << A[0][0] << endl;

    return 0;
}
