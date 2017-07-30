#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if( N == 1 ){
        cout << 1 << endl;
        return 0;
    }


    int ans = 0, sum = 0;
    for( int i = 1; i <= N; ++i ){
        int n = i, s = 0;
        while( !(n % 2) ){
            n /= 2;
            ++s;
        }
        if( sum < s ){
            sum = s;
            ans = i;
        }
    }


    cout << ans << endl;


    return 
