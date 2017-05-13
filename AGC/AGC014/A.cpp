#include <iostream>
 
using namespace std;
 
int main()
{
    long int A, B, C;
    cin >> A >> B >> C;
    
    if( A == B && B == C ){
        if( A%2 == 1 ) cout << 0 << endl;
        else cout << -1 << endl;
        return 0;
    }
    
    long int ans = 0;
    while( (A%2 || B%2 || C%2) == 0 ){
        long int a = A, b = B, c = C;
        A = b/2 + c/2;
        B = a/2 + c/2;
        C = a/2 + b/2;
 
        ++ans;
    }
    
    
    cout << ans << endl;
    
    
    return 0;
}
