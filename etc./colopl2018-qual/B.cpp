#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, X;
    string S;
    cin >> N >> X >> S;

    int T[N];
    for( int i = 0; i < N; ++i ) cin >> T[i];


    long long int ans = 0;
    for( int i = 0; i < N; ++i )
        ans += (S[i] == '0') ? T[i] : ( (X < T[i]) ? X : T[i] );


    cout << ans << endl;

    return 0;
}
