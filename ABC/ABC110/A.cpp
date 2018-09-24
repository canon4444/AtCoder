#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int m =  max(A, max(B, C));

    if( m == A ) cout << A*10 + B + C << endl;
    else if( m == B ) cout << B*10 + A + C << endl;
    else if( m == C ) cout << C*10 + A + B << endl;

    return 0;
}
