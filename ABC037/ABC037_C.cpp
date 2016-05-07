#include <iostream>

using namespace std;


int main()
{
    int N, K;
    cin >> N >> K;

    long long int a[100000], sum = 0;
    for( int i = 0; i < N; ++i ){
        cin >> a[i];
        sum += a[i];
    }
    
    
    int n = N - K + 1;
    n = n < K ? n : K;
    
    //存在しない分を求める前処理
    long long int minus[100000];
    for( int i = 0; i < n; ++i ){
        if( i == 0 ) minus[i] = 0;
        else minus[i] = minus[i-1] + a[i-1] + a[N-i];
    }

    //合計を足して，存在しない分を引く
    long long int ans = 0;
    for( int i = 0; i < n; ++i ) ans += sum - minus[i];


    cout << ans << endl;


    return 0;
}
