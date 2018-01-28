#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[2][100] = { { 0 } };
    for( int i = 0; i < 2; ++i )
        for( int j = 0; j < N; ++j )
            cin >> A[i][j];


    int ans = 0, tmp, idx;
    for( int i = 0; i < N; ++i ){
        tmp = 0;
        idx = 0;

        for( int j = 0; j < N; ++j ){
            tmp += A[idx][j];
            if( i == j ){
                idx = 1;
                tmp += A[idx][j]; // 下に移動したマスの飴
            }
        }

        if( ans < tmp ){
            ans = tmp;
            // cout << "* " << i << endl;        
        }
    }


    cout << ans << endl;

    return 0;
}
