#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<long long int> a(N), b(N), c(M), d(M);
    for( int i = 0; i < N; ++i )
        cin >> a[i] >> b[i];
    for( int i = 0; i < M; ++i )
        cin >> c[i] >> d[i];

    vector<long long int> ans(N, 0), dis(M);
    for( int i = 0; i < N; ++i ){
        for( int j = 0; j < M; ++j ) // 各チェックポイントとの距離
            dis[j] = abs(a[i]-c[j]) + abs(b[i]-d[j]);
        for( int j = 1; j < M; ++j ) // 距離が最小のチェックポイント
            if( dis[j] < dis[ans[i]] ) ans[i] = j;
    }

    for( int i = 0; i < N; ++i )
        cout << ans[i] + 1 << endl;

    return 0;
}
