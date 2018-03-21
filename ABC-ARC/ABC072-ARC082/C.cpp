#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for( int i = 0; i < N; ++i )
        cin >> a[i];


    map<int, int> b;
    for( int i = 0; i < N; ++i ){
        if( b.find(a[i]+1) == b.end() ) b[a[i]+1] = 1;
        else b[a[i]+1] += 1;
        if( b.find(a[i]-1) == b.end() ) b[a[i]-1] = 1;
        else b[a[i]-1] += 1;
        if( b.find(a[i]) == b.end() ) b[a[i]] = 1;
        else b[a[i]] += 1;
    }

    int ans = 1;
    for( int i = 0; i < N; ++i )
        ans = ans < b[i] ? b[i] : ans;


    cout << ans << endl;

    return 0;
}
