#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if( N*N <= 201800 ){
        for( int i = 0; i < N; ++i ){
            for( int j = 0; j < N; ++j )
                cout << "X";
            cout << endl;
        }
    } else {
        int debug = 1;
        char ans[1000][1000] = { { '.' }, { 'X', '.' }, { '.' } };
        for( int i = 0; i < N; ++i ){
            for( int j = 0; j < N; ++j ){
                if( ans[i][j] != '.' && ans[i][j] != 'X' ){
                    if( i == 0 ){ // 上

            }
        }
        cout << debug << endl;
    }

    return 0;
}
