#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long int N, C;
    cin >> N >> C;

    vector<long long int> L(N);
    for( int i = 0; i < N; ++i ) cin >> L[i];


    long long int ans = 0;

    // 降順にソート
    sort(L.begin(), L.end(), std::greater<long long int>());

    // 収納
    for( int i = 0, j = N-1; i <= j; ){
        if( i == j ){ ++ans; break; }
        if( L[i] == C || L[i]+1 == C ){ ++ans; ++i; }
        else if( L[i]+L[j]+1 <= C ){ ++ans; ++i; --j; }
        else { ++ans; ++i; }
    }


    cout << ans << endl;

    return 0;
}
