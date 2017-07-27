#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x[3], y[3];
    for( int i = 0; i < 3; ++i ) cin >> x[i] >> y[i];

    for( int i = 1; i < 3; ++i ){
        x[i] -= x[0];
        y[i] -= y[0];
    }

    printf("%lf\n", (double)abs(x[1]*y[2]-y[1]*x[2])/2);

    return 0;
}
