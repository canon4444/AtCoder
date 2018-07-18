#include <iostream>
using namespace std;

int main()
{
    int n, L, R;
    cin >> n >> L >> R;


    int a;
    for( int i = 0; i < n; ++i ){
        cin  >> a;
        if( L <= a && a <= R ) cout << a;
        else if( a < L ) cout << L;
        else cout << R;
        if( i != n-1 ) cout << " ";
        else cout << endl;
    }


    return 0;
}
