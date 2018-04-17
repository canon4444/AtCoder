#include <iostream>
using namespace std;

int main()
{
    int W, a, b;
    cin >> W >> a >> b;


    if( b < a ) swap(a, b);

    if( b <= a+W ) cout << 0 << endl;
    else cout << b-(a+W) << endl;


    return 0;
}
