#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> t(N), x(N), y(N);
    for( int i = 0; i < N; ++i )
        cin >> t[i] >> x[i] >> y[i];

    int ct = 0, cx = 0, cy = 0;
    int dt, dx, dy;

    for( int i = 0; i < N; ++i ){
        dx = abs(x[i] - cx);
        dy = abs(y[i] - cy);
        dt = abs(t[i] - ct);

        if( dx + dy <= dt ){
            if( (dx+dy)%2 != dt%2 ){
                cout << "No" << endl;
                return 0;
            }
        } else {
            cout << "No" << endl;
            return 0;
        }

        ct = t[i];
        cx = x[i];
        cy = y[i];
    }

    cout << "Yes" << endl;

    return 0;
}
