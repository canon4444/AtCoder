#include <iostream>


using namespace std;


int main()
{
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    
    
    int ans;
    if( N < K ) ans = X * N;
    else ans = X*K + (N-K)*Y;
    cout << ans << endl;
    
    
    return 0;
}
