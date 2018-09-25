#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int p[100] = { 0 };
    for( int i = 0; i < N; ++i )
        cin >> p[i];

    int MAX = 0;
    int dp[100+1][100*100+1] = { { 1 } }; // dp[N][取り得る最大の合計点数（MAX_N*MAX_p）]

    for( int i = 0; i < N; ++i )
        MAX += p[i];

    for( int i = 1; i < N+1; ++i ){
        for( int j = 0; j < MAX+1; ++j ){
            if( dp[i-1][j] == 1 ){
                dp[i][j] = 1;
                dp[i][j+p[i-1]] = 1;
            }
        }
    }

    int ans = 0;

    for( int i = 0; i < MAX+1; ++i )
        if( dp[N][i] == 1 ) ++ans;

    cout << ans << endl;

    return 0;
}
