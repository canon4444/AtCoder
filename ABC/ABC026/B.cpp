#include <iostream>
#include <set>

//M_PI
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;


int main()
{
    int N;
    cin >> N;

    set<int> R;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        R.insert(tmp);
    }


    int cnt = 1;
    double ans = 0;
    for( auto itr = R.begin(); itr != R.end(); ++itr, ++cnt ){
        if( cnt % 2 == N % 2 ){
            ans += pow(*itr, 2);
            //cout << cnt << ": + " << *itr << endl;
        } else {
            ans -= pow(*itr, 2);
            //cout << cnt << ": - " << *itr << endl;
        }
    }
    ans *= M_PI;


    //cout << ans << endl;
    printf("%lf\n", ans);


    return 0;
}
