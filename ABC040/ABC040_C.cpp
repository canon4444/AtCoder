#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int N;
    cin >> N;
    
    int a[100000] = { 0 };
    for( int i = 0; i < N; ++i ){
        cin >> a[i];
    }
    
    int dp[100000] = { 0, (int)fabs(a[1]-a[0]) };
    for( int i = 2; i < N; ++i ){
        int first = dp[i-1] + (int)fabs(a[i]-a[i-1]);
        int second = dp[i-2] + (int)fabs(a[i]-a[i-2]);
        dp[i] = first < second ? first : second;
    }
    
    cout << dp[N-1] << endl;
    
    return 0;
}
