#include <iostream>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    char a[100][100];
    for( int i = 0; i < H; ++i ){
        for( int j = 0; j < W; ++j ){
            cin >> a[i][j];
        }
    }

    for( int i = 0; i < H+2; ++i ){
        for( int j = 0; j < W+2; ++j ){
            if( i == 0 || i == H+1 || j == 0 || j == W+1 ) cout << "#";
            else cout << a[i-1][j-1];
        }
        cout << endl;
    }

    return 0;
}
