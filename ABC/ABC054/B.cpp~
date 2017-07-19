#include <iostream>
using namespace std;

int main()
{
    //入力
    int N, M;
    cin >> N >> M;

    char A[50][50] = { { 0 } }, B[50][50] = { { 0 } };
    for( int i = 0; i < N; ++i ){
        string s;
        cin >> s;
        for( int j = 0; j < N; ++j ){
            A[i][j] = s.c_str()[j];
        }
    }
    for( int i = 0; i < M; ++i ){
        string s;
        cin >> s;
        for( int j = 0; j < M; ++j ){
            B[i][j] = s.c_str()[j];
        }
    }


    //パターンマッチング
    for( int i = 0; i < N*N; ++i ){
        bool flag = true;
        for( int j = 0; j < M && flag; ++j ){
            for( int k = 0; k < M && flag; ++k ){
                if( A[j+i/N][k+i%N] != B[j][k] ) flag = false;
            }
        }
        if( flag == true ){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;


    return 0;
}
