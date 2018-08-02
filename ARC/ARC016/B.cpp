#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    const int M = 9;
    vector<string> x(N);

    for( int i = 0; i < N; ++i )
        cin >> x[i];

    int ans = 0;
    int y[9] = { 0 };

    for( int i = 0; i < N; ++i ){
        for( int j = 0; j < M; ++j ){
            if( x[i][j] == 'x' ){
                ++ans;
                if( y[j] == 1 ) y[j] = 0;
            } else if( x[i][j] == 'o' &&  y[j] == 0 ){
                ++ans;
                y[j] = 1;
            } else if( x[i][j] == '.' && y[j] == 1 ){
                y[j] = 0;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
