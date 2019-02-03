#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> X(M);
    for( int i = 0; i < M; ++i )
        cin >> X[i];

    sort(X.begin(), X.end());

    vector<int> dis(M-1);
    for( int i = 0; i < M-1; ++i )
        dis[i] = abs(X[i+1]-X[i]);

    sort(dis.begin(), dis.end());

    int ans = 0;
    for( int i = 0; i < M-N; ++i )
        ans += dis[i];

    cout << ans << endl;

    return 0;
}
