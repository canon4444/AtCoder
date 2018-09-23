#include <iostream>


using namespace std;


int main()
{
    int H, W;
    cin >> H >> W;

    char C[100][100] = { { 0 } };
    for( int i = 0; i < H; ++i ){
        for( int j = 0; j < W; ++j ){
            cin >> C[i][j];
        }
    }


    char ans[200][100] = { { 0 } };
    for( int i = 0; i < H; ++i ){
        for( int j = 0; j < W; ++j ){
            ans[2 * i][j] = C[i][j];
            ans[2 * i + 1][j] = C[i][j];
        }
    }


    for( int i = 0; i < 2 * H; ++i ){
        for( int j = 0; j < W; ++j ){
            cout << ans[i][j];
        }
        cout << endl;
    }


    return 0;
}
