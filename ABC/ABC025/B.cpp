#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main()
{
    int N, A, B;
    
    cin >> N >> A >> B;


    int E = 0, W = 0;

    for( int i = 0; i < N; ++i ){
        string s;
        int d;
        cin >> s >> d;

        if( d < A ){
            if( s == "East" ) E += A;
            else W += A;
        } else if( B < d ){
            if( s == "East" ) E += B;
            else W += B;
        } else {
            if( s == "East" ) E += d;
            else W += d;
        }
    }


    if( E < W ) cout << "West " << W-E << endl;
    else if( W < E ) cout << "East " << E-W << endl;
    else cout << 0 << endl;


    return 0;
}
