#include <iostream>
using namespace std;

long long int pow_mod(long long int n, long long int m, long long int p)
{
    if( p == 0 ) return 1;
    else if( p % 2 ) return pow_mod(n, m, p-1) * n % m;
    else {
        long long int tmp = pow_mod(n, m, p/2);
        return tmp * tmp % m;
    }
}

int main()
{
    long long int N, M, P;
    cin >> N >> M >> P;
    
    cout << pow_mod(N, M, P) << endl;
    
    return 0;
}
