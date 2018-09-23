#include <iostream>
using namespace std;

int main()
{
    int A, B, C, S;
    cin >> A >> B >> C >> S;

    if( A+B+C <= S && S <= A+B+C+3 ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
