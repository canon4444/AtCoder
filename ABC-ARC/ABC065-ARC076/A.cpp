#include <iostream>

using namespace std;

int main()
{
    int X, A, B;
    cin >> X >> A >> B;


    if( 0 <= A-B ) cout << "delicious" << endl;
    else if( A-B < 0 && A-B <= X ) cout << "safe" << endl;
    else cout << "dangerous" << endl;


    return 0;
}
