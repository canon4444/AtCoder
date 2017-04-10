#include <iostream>

using namespace std;

int main()
{
    long int a, b, x;
    cin >> a >> b >> x;
    
    long int ans = 0;
    if( a % x != 0 ) a += x - (a % x);
    if( b % x != 0 ) b -= (b % x);
    ans = b/x - a/x + 1;
    
    if( ans < 0 ) cout << 0 << endl;
    else cout << ans << endl;
    
    return 0;
}
