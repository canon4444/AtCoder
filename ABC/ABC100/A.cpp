#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int a = 0, b = 0;

    for( int i = 0; i < 16; ++i ){
        if( i % 2 ){
            if( a < A ) ++a;
        } else {
            if( b < B ) ++b;
        }
    }

    if( a == A && b == B ) cout << "Yay!" << endl;
    else cout << ":(" << endl;

    return 0;
}
