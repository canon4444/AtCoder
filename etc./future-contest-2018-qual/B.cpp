#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

const int M = 100;

struct ASort {
    int x = 0, y = 0, AH = 0;

    //sort用に演算子をオーバーロード
    bool operator<(const ASort& right) const
        {
            return value == right.value ? false : value < right.value;
        }
};


int main()
{
    // 入力
    int N = 100;
    int A[100][100] = { { 0 } };
    for( int i = 0; i < N; ++i )
        for( int j = 0; j < N; ++j )
            cin >> A[i][j];


    // 処理
    int B[100][100] = { { 0 } }, C[M][100][100] = { { { 0 } } };
    int Q = 0, x, y, h[M], idx = 0;
    vector<int> X, Y, H;
    long long int value0 = 100000000, value1 = 0;

    srand(time(0));

    int cnt = 0;
    while( ++cnt ){
        if( 1000 < (int)X.size() ) break;
        if( 10000 < cnt ) break;

        x = rand() % N;
        y = rand() % N;
        for( int i = 0; i < M; ++i ){
            //h[i] = (rand() % N) + 1;
            double k = round((double)50/(A[y][x]-B[y][x]));
            h[i] = B[y][x] * k;
            if( 100 < h[i] ) h[i] = 100;
            if( h[i] < 1 ) h[i] = 1;
        }
        // 評価
        int value_c[M] = { 0 };
        for( int i = 0; i < N; ++i ){
            for( int j = 0; j < N; ++j ){
                for( int k = 0; k < M; ++k ){
                    C[k][i][j] = B[i][j] + max(0, h[k]-abs(j-x)-abs(i-y));
                    value_c[k] += abs(A[i][j]-C[k][i][j]);
                }
            }
        }

        for( int i = 0; i < M; ++i )
            idx = value_c[i] < value_c[idx] ? idx : i;

        if( value_c[idx] < value0 ){ // 足し算の要素の可否
            X.push_back(x);
            Y.push_back(y);
            H.push_back(h[idx]);
            for( int i = 0; i < N; ++i )
                for( int j = 0; j < N; ++j )
                    B[i][j] = C[idx][i][j];
        }
        value0 = value_c[idx];

        if( cnt%50 == 0 ){
            if( value1 < value_c[idx] ) break; // 悪化していたら終わり
            value1 = value_c[idx];
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
