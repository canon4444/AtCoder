#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int X, K;
    cin >> X >> K;


    long long int Y = X + 1;
    K = pow(10, K);
    if( Y%K != 0 ) Y += K - Y%K;


    cout << Y << endl;


    return 0;
}
