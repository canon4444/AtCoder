#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    int b;
    long int ans = 0;

    int N;
    cin >> N;

    vector<int> A(N);
    for( int i = 0; i < N; ++i ){
        cin >> A[i];
        A[i] -= i + 1;
    }

    sort(A.begin(), A.end());

    b = A[N/2];

    for( int i = 0; i < N; ++i ){
        ans += abs(A[i] - b);
    }
    
    cout << ans << endl;

    return 0;
}
