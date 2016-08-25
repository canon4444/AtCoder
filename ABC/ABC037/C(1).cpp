//別解

#include <iostream>

using namespace std;


int main()
{
    int N, K;
    cin >> N >> K;

    long long int a[100000] = { 0 }, s[100000] = { 0 };
    for( int i = 0; i < N; ++i ){
        cin >> a[i];
        if( i == 0 ) s[i] = a[i];
        else s[i] += s[i-1] + a[i];
    }
    
    
    long long int ans = 0;
    for( int i = K-1; i < N; ++i ){
        if( i == K-1 ) ans += s[i];
        else ans += s[i] - s[i-K];
    }

    
    cout << ans << endl;


    return 0;
}
