#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for( int i = 0; i < N; ++i )
        cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    for( int i = 0; i < N-1; ++i )
        ans += a[i+1] - a[i];

    cout << ans << endl;

    return 0;
}
