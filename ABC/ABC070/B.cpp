#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int ans = min(B, D) - max(A, C);
    if( ans < 0 ) cout << 0 << endl;
    else cout << ans  << endl;

    return 0;
}
