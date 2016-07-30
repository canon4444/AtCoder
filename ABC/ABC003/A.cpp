#include <iostream>

using namespace std;


int main()
{
    int N;
    cin >> N;

    double ans = 0;
    for( int i = 1; i < N + 1; ++i ){
        ans += i * 10000;
    }

    cout << ans/N << endl;

    return 0;
}
