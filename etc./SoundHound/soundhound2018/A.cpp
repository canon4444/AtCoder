#include <iostream>
#include <string>
using namespace std;


int main()
{
    string X, Y;
    cin >> X >> Y;

    if( X[0] == 'S' && Y[0] == 'H' ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
