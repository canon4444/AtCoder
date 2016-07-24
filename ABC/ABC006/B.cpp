#include <iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;


    int a1 = 0, a2 = 0, a3 = 1;
    for( int i = 3; i < n; ++i ){
        int a4 = (a1 + a2 + a3) % 10007;
        a1 = a2;
        a2 = a3;
        a3 = a4;
    }

    if( n == 1 ) cout << a1 << endl;
    else if( n == 2 ) cout << a2 << endl;
    else cout << a3 << endl;


    return 0;
}
