#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for( int i = 0; i < n; ++i )
        cin >> a[i];

    int dir = 1;
    vector<int> b;
    for( int i = 0; i < n; ++i ){
        if( dir == 1 ) b.push_back(a[i]);
        else if( dir == -1 ) b.insert(b.begin(), a[i]);
        dir *= -1;
    }

    if( dir == 1 ){
        for( int i = 0; i < n; ++i )
            cout << b[i] << ( i != n-1 ? " " : "\n");
    } else if( dir == -1 ){
        for( int i = n-1; -1 < i; --i )
            cout << b[i] << ( i != 0 ? " " : "\n");
    }

    return 0;
}
