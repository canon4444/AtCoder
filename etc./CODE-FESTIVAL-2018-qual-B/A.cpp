#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    for( int i = 1; i < 101; ++i )
        if( i % N == 0 ) ++cnt;

    cout << 100 - cnt << endl;

    return 0;
}
