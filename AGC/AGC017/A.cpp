#include <iostream>

using namespace std;



long long int combination(int a, int b)
{
    long long int ret = 1;

    long long int to = 1, bo = 1; // top/bottom
    for( int i = 0; i < b; ++i ){
        to *= a-i;
        bo *= b-i;
        if( to%bo == 0 ){
            ret *= to / bo;
            to = 1, bo = 1;
        } else if( to%2 == 0 && bo%2 == 0 ){
            to /= 2, bo /=2;
        }
    }
    ret *= to / bo;

    return ret;
}


int main()
{
    int N, P;
    cin >> N >> P;

    int t, ar[2] = { 0 };
    for( int i = 0; i < N; ++i ){
        cin >> t;
        ++ar[t%2];
    }


    long long int ans = 0;

    if( P == 0 ){
        ans += 1; //食べない

        long long int ar0 = 0;
        for( int i = 1; i < ar[0]+1; ++i ){ //ar[0]の組合せ
            ar0 += combination(ar[0], i);
        }
        ans += ar0;
        
        long long int ar1 = 0;
        for( int i = 2; i < ar[1]+1; i+=2 ){ //ar[1]で0になる組合せ
            ar1 += combination(ar[1], i);
        }
        ans += ar1;
        
        if( ar0 != 0 && ar1 != 0 ){
            long long int ar01 = ar0 + ar1, ar2 = 0;
            for( int i = 1; i < ar01+1; ++i ){ //ar[0]と，ar[1]で0になる組合せ，の組合せ
                ar2 += combination(ar01, i);
            }
            ans += ar2;
        }
    } else {
        long long int ar1 = 0;
        for( int i = 1; i < ar[1]+1; i+=2 ){ //ar[1]で1になる組合せ
            ar1 += combination(ar[1], i);
            //cout << "ar1: " << ar1 << endl;
        }
        ans += ar1;

        long long int ar0 = 0;
        for( int i = 1; i < ar[0]+1; ++i ){ //とりあえずar[0]の組合せ
            ar0 += combination(ar[0], i);
        }

        long long int ar2 = ar0 * ar1; //ar[0]の組合せと，ar[1]で1になる組合せ，の組合せ
        ans += ar2;
    }

    cout << ans << endl;

    return 0;
}
