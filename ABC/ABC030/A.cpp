#include <iostream>


using namespace std;


int main()
{
    double A, B, C, D;
    cin >> A >> B >> C >> D;


    if( B/A == D/C ) cout << "DRAW" << endl;
    else if( B/A < D/C ) cout << "AOKI" << endl;
    else cout << "TAKAHASHI" << endl;


    return 0;
}
