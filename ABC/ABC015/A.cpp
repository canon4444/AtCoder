#include <iostream>
#include <string>


using namespace std;


int main()
{
    string A, B;
    cin >> A >> B;


    if( A.length() < B.length() ) cout << B << endl;
    else cout << A << endl;


    return 0;
}
