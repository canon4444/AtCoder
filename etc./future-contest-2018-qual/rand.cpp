#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // 入力
    int N = 100;
    int A[100][100] = { { 0 } };
    for( int i = 0; i < N; ++i )
        for( int j = 0; j < N; ++j )
            cin >> A[i][j];


    // 処理
    int B[100][100] = { { 0 } }, C[100][100] = { { 0 } };
    int Q = 0, x, y, h, idx = 0;
    vector<int> X, Y, H;
    long long int value0 = 100000000, value1 = 0;

    srand(time(0));

    int cnt = 0;
    while( ++cnt ){
        if( 1000 < (int)X.size() ) break;
        if( 10000 < cnt ) break;

        x = rand() % N;
        y = rand() % N;
        h = (rand() % N) + 1;

        // 評価
        int value_c = 0;
        for( int i = 0; i < N; ++i ){
            for( int j = 0; j < N; ++j ){
                C[i][j] = B[i][j] + max(0, h-abs(j-x)-abs(i-y));
                value_c += abs(A[i][j]-C[i][j]);
            }
        }

        if( value_c < value0 ){ // 足し算の要素の可否
            X.push_back(x);
            Y.push_back(y);
            H.push_back(h[idx]);
            for( int i = 0; i < N; ++i )
                for( int j = 0; j < N; ++j )
                    B[i][j] = C[i][j];
        }
        value0 = value_c;

        if( cnt%10 == 0 ){
            if( value1 < value_c ) break; // 悪化していたら終わり
            value1 = value_c;
        }
    }


    // 出力
    Q = (int)X.size();
    if( 1000 < Q ) Q = 1000;
    cout << Q << endl;
    for( int i = 0; i < Q; ++i )
        cout << X[i] << " " << Y[i] << " " << H[i] << endl;


    return 0;
}
