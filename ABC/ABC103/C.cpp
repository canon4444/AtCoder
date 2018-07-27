#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[3000] = { 0 };
    for( int i = 0; i < N; ++i )
        cin >> a[i];

    long int m = 0;
    for( int i = 0; i < N; ++i )
        m += a[i];

    cout << m-N << endl;

    return 0;
}
