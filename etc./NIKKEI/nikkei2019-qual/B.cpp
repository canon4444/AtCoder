#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string A, B, C;
    int ans = 0;

    cin >> N >> A >> B >> C;

    for( int i = 0; i < N; ++i ){
        if( A[i] == B[i] && B[i] == C[i] ) continue;
        else if( A[i] == B[i] || A[i] == C[i] || B[i] == C[i] ) ans += 1;
        else ans += 2;
    }

    cout << ans << endl;

    return 0;
}
