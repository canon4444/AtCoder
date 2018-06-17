#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> s(H);
    for( int i = 0; i < H; ++i )
        cin >> s[i];


    bool ans = false;

    for( int i = 0; i < H; ++i ){
        for( int j = 0; j < W; ++j ){
            bool flag = true; // 黒くぬれる
            if( s[i][j] == '#' ){
                if( i != 0 && s[i-1][j] != '.' ) 
                        
            }
        }
    }


    if( ans ) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
