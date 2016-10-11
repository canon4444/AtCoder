#include <iostream>
#include <cstdio>


using namespace std;


int main()
{
    double n, m;
    cin >> n >> m;


    n = (int)n % 12; //時を0-11に直す
    n = (double)360/12*n + (double)360/12/60*m;

    m = (double)360/60*m;

    if( m < n ) swap(n, m); //絶対n<mにする


    if( m-n < 360.0-m+n ) printf("%g\n", m-n);
    else printf("%g\n", 360.0-m+n);


    return 0;
}
