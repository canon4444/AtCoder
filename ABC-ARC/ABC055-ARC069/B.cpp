#include <iostream>
using namespace std;

long long int func(int n)
{
    if( n == 1 ) return 1;
    else return (func(n-1) * n) % 1000000007;
}

int main()
{
    int N;
    cin >> N;

    int ans = (int)func(N);

    cout << ans << endl;

    return 0;
}
