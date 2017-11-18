#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A, B, C, D;
    D = N%10; N /= 10;
    C = N%10; N /= 10;
    B = N%10; N /= 10;
    A = N%10;

    if( A+B+C+D == 7 ) cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl;
    else if( A+B+C-D == 7 ) cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl;
    else if( A+B-C+D == 7 ) cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl;
    else if( A+B-C-D == 7 ) cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl;
    else if( A-B+C+D == 7 ) cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl;
    else if( A-B+C-D == 7 ) cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl;
    else if( A-B-C+D == 7 ) cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl;
    else if( A-B-C-D == 7 ) cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl;

    return 0;
}
