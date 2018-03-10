#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int N, K, H, W, T;
    cin >> N >> K >> H >> W >> T;

    string row[100][50];
    for( int i = 0; i < N; ++i ){
        for( int j = 0; j < H; ++j ){
            cin >> row[i][j];
        }
    }


    srand(time(0));


    int cntK = 0;
    int n[100] = { 0 };
    while( cntK < K ){
        int i = rand() % N;
        if( n[i] ) continue;
        else {
            n[i] = 1;
            ++cntK;
            cout << i;
            if( cntK != K ) cout << " ";
        }
    }
    cout << endl;

    for( int i = 0; i < T; ++i ){
        switch( rand() % 4 ){
        case 0: cout << 'U'; break;
        case 1: cout << 'D'; break;
        case 2: cout << 'L'; break;
        case 3: cout << 'R'; break;
        }
    }
    cout << endl;


    return 0;
}
