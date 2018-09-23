#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    long long int ans = 0;
    for( int i = 1; i < N+1; ++i ){
        long long int tmp = 0;
        for( int j = i; j != 0; j/=10 ){
            tmp += j % 10;
            if( B < tmp ) break;
        }
        if( A <= tmp && tmp <= B ) ans += i;
    }

    cout << ans << endl;

    return 0;
}
