#include <iostream>
 
using namespace std;
 
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    for( int i = A; i < A*B+C; i += A ){
        if( i % B == C ){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
    return 0;
}
