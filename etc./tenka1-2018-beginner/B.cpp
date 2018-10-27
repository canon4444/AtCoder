#include <iostream>
using namespace std;

int main()
{
    int A, B, K;
    cin >> A >> B >> K;

    for( int i = 0; i < K; ++i ){
        if( i % 2 == 0 ){
            if( A % 2 ) --A;
            A /= 2;
            B += A;
        } else {
            if( B % 2 ) --B;
            B /= 2;
            A += B;
        }
    }

    cout << A << " " << B << endl;

    return 0;
}
