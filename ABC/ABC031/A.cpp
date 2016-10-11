#include <iostream>


using namespace std;


int main()
{
    int A, D;
    cin >> A >> D;


    cout << ( (A+1)*D < A*(D+1) ? A*(D+1) : (A+1)*D ) << endl;


    return 0;
}
