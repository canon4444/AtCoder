#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

struct ASort {
    int value;
    int AX = 0, AY = 0, AH = 0;

    //sort用に演算子をオーバーロード
    bool operator<(const ASort& right) const
        {
            return value == right.value ? false : value < right.value;
        }
};

/* MAX:100, MIN:1 にスケーリング
int scaling(int v, int MAX, int MID, int MIN)
{
    int ret = v;
    int range = MAX - MIN;
    double mol = round((double)range / 100);

    ret = round((double)ret/100 * mol);
    if( 100 < ret ) ret = 100;

    return ret;
}
*/

int scaling(char t, int v, int MAX, int MID, int MIN)
{
    int ret = v;
    double k;
    
    switch( t ){
    case 'X': k = (double)100 / MAX; break;
    case 'D': k = (double)50 / MID; break;
    case 'N': k = (double)1 / MIN; break;
    }
    ret = round((double)ret * k);
    if( 100 < ret ) ret = 100;
    if( ret < 1 ) ret = 1;

    return ret;
}


int main()
{
    // 入力
    int N = 100;
    //cin >> N;

    int A[100][100] = { { 0 } };
    vector<ASort> asort;
    long long int MAX = 0, MID = 0, MIN = 100000;
    for( int i = 0; i < N; ++i ){
        for( int j = 0; j < N; ++j ){
            cin >> A[i][j];
            ASort tmp;
            tmp.value = A[i][j];
            tmp.AX = j;
            tmp.AY = i;
            asort.push_back(tmp);
            MAX = MAX < A[i][j] ? A[i][j] : MAX;
            MID += A[i][j];
            MIN = MIN > A[i][j] ? A[i][j] : MIN;
        }
    }
    MID /= 10000; //cout << "MID " <<  MID << "  MAX " << MAX << "  MIN " << MIN << endl;


    // 処理
    int B[100][100] = { { 0 } }, C[100][100] = { { 0 } }, CX[100][100] = { { 0 } }, CD[100][100] = { { 0 } }, CN[100][100] = { { 0 } };
    int Q = 0, x, y, h, hX, hD, hN;
    vector<int> X, Y, H;
    long long int value0 = 100000000, value1 = 0, value_c = 0, value_cX = 0, value_cD = 0, value_cN = 0;

    srand(time(0));

    sort(asort.rbegin(), asort.rend());

    int cnt = 0;
    auto itr = asort.begin();
    while( ++cnt ){
        if( 1000 < (int)X.size() ) break;
        if( 10000 < cnt ) break;

        x = itr->AX;
        //x = rand() % N;
        y = itr->AY;
        //y = rand() % N;
        hX = scaling('X', abs(A[y][x]-B[y][x]), MAX, MID, MIN);
        hD = scaling('D', abs(A[y][x]-B[y][x]), MAX, MID, MIN);
        hN = scaling('N', abs(A[y][x]-B[y][x]), MAX, MID, MIN);
        //h = scaling(abs(A[y][x]-B[y][x]), MAX, MID, MIN);
        //h = (rand() % N) + 1;


        // 評価
        for( int j = 0; j < N; ++j ){
            for( int k = 0; k < N; ++k ){
                CX[j][k] = B[j][k] + max(0, hX-abs(k-x)-abs(j-y));
                value_cX += abs(A[j][k]-CX[j][k]);
                CD[j][k] = B[j][k] + max(0, hD-abs(k-x)-abs(j-y));
                value_cD += abs(A[j][k]-CD[j][k]);
                CN[j][k] = B[j][k] + max(0, hN-abs(k-x)-abs(j-y));
                value_cN += abs(A[j][k]-CN[j][k]);
            }
        }
        if( value_cX < value_cD ){
            value_c = value_cX;
            h = hX;
            for( int j = 0; j < N; ++j ){
                for( int k = 0; k < N; ++k ){
                    C[j][k] = CX[j][k];
                }
            }
        } else {
            value_c= value_cD;
            h = hD;
            for( int j = 0; j < N; ++j ){
                for( int k = 0; k < N; ++k ){
                    C[j][k] = CD[j][k];
                }
            }
        }
        if( value_cN > value_c ){
            value_c = value_cN;
            h = hN;
            for( int j = 0; j < N; ++j ){
                for( int k = 0; k < N; ++k ){
                    C[j][k] = CN[j][k];
                }
            }
        }
/*
        for( int j = 0; j < N; ++j ){
            for( int k = 0; k < N; ++k ){
                C[j][k] = B[j][k] + max(0, h-abs(k-x)-abs(j-y));
                value_c += abs(A[j][k]-C[j][k]);
            }
        }
*/

        if( value_c < value0 ){ // 足し算の要素の可否
            X.push_back(x);
            Y.push_back(y);
            H.push_back(h);
            for( int j = 0; j < N; ++j ){
                for( int k = 0; k < N; ++k ){
                    B[j][k] = C[j][k];
                }
            }
        }
        value0 = value_c;
        value_c = 0;

        if( cnt%10 == 0 ){
            if( value1 < value_c ) break; // 悪化していたら終わり
            value1 = value_c;
        }

        ++itr;
        if( itr == asort.end() ) itr = asort.begin();
    }


    // 出力
    Q = (int)X.size();
    if( 1000 < Q ) Q = 1000;
    cout << Q << endl;
    for( int i = 0; i < Q; ++i )
        cout << X[i] << " " << Y[i] << " " << H[i] << endl;


    return 0;
}
