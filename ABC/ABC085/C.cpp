#include <iostream>
using namespace std;

int main()
{
    long long int N, Y;
    cin >> N >> Y;


    int max = Y / 1000;
    int x = max/10+1, y = max/5+1;
    bool ans = false;

    int i, j, k;
    for( i = 0; i < x && !ans; ++i ){
        for( j = 0; j < y && !ans; ++j ){
            k = N - (i+j);
            if( k < 0 ) continue;
            if( 10*i+5*j+k != max ) continue;
            ans = true;
            --i, --j;
        }
    }


    if( !ans ) i = j = k = -1;
    cout << i << " " << j << " " << k << endl;
    return 0;
}
