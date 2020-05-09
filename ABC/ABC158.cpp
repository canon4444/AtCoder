#include <iostream>
#include <string>
using namespace std;

void A()
{
    string S;
    cin >> S;
    
    if( S[0] == S[1] && S[1] == S[2] ){
        cout << "No" << endl;
        return;
    }
    
    cout << "Yes" << endl;
}

void B()
{
    long long int N, A, B;
    cin >> N >> A >> B;
    
    cout << N / (A + B) * A + min(A, N % (A + B)) << endl;
}


int main()
{
    //A();
    //B();
    
    return 0;
}
