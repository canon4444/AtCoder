#include <iostream>
using namespace std;

int main()
{
    long long int N;
    cin >> N;

    long long int X = N, fX = 0;
    for( ; X != 0; ){
        fX += X % 10;
        X /= 10;
    }

    if( N%fX == 0 ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
