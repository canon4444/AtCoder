#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if( N % 2 == 0 ){
        cout << "NO" << endl;
        return 0;
    }

    bool ans = true;

    for( int i = 3; i < N/2; ++i )
        if( N % i == 0 ){
            ans = false;
            break;
        }

    if( ans ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
