#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;

    vector<int> x(N), y(M);
    for( int i = 0; i < N; ++i )
        cin >> x[i];
    for( int i = 0; i < M; ++i )
        cin >> y[i];

    for( int i = X+1; i < Y+1; ++i ){
        bool ans = true;

        for( int j = 0; j < N; ++j ){
            if( i <= x[j] ){
                ans = false;
                break;
            }
        }

        if( ans ){
            for( int j = 0; j < M; ++j ){
                if( y[j] < i ){
                    ans = false;
                    break;
                }
            }
        }

        if( ans ){
            cout << "No War" << endl;
            return 0;
        }
    }

    cout << "War" << endl;

    return 0;
}
