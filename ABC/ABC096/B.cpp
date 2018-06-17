#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B, C, K;
    cin >> A >> B >> C >> K;


    int ans = max(A, B);
    ans = max(ans, C);

    if( ans == A ) ans = A*pow(2, K) + B + C;
    else if( ans == B ) ans = A + B*pow(2, K) + C;
    else if( ans == C ) ans = A + B + C*pow(2, K);


    cout << ans << endl;


    return 0;
}
