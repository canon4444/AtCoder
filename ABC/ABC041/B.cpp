#include <iostream>

#define N 1000000007


using namespace std;


int main()
{
    unsigned long int A, B, C;
    cin >> A >> B >> C;
    
    
    A %= N;
    B %= N;
    C %= N;

    
    cout << (((A*B)%N)*C)%N << endl;
    
    
    return 0;
}
