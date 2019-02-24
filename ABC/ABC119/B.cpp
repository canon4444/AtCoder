#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<double> x(N);
    vector<string> u(N);
    for( int i = 0; i < N; ++i )
        cin >> x[i] >> u[i];

    double ans = 0.0;
    for( int i = 0; i < N; ++i ){
        if( u[i] == "JPY" ) ans += x[i];
        else ans += 380000.0 * x[i];
    }

    cout << ans << endl;

    return 0;
}
