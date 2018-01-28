#include <iostream>
using namespace std;

int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;


    int ans = 0;
    for( int i = 0; i <= A; ++i ){
        if( X < 500*i ) break;

        for( int j = 0; j <= B; ++j ){
            if( X < 500*i + 100*j ) break;

            int zan = X - (500*i + 100*j);
            if( zan/50 <= C && zan%50 == 0 ){
                ++ans;
                // cout << "500*(" << i << ") + 100*(" << j << ") + 50*(" << zan/50 << ")" << endl;
            }
        }
    }


    cout << ans << endl;

    return 0;
}
