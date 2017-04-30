#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string A, B, C;
    cin >> A >> B >> C;
    
    if( A.c_str()[A.length()-1] == B.c_str()[0] && B.c_str()[B.length()-1] == C.c_str()[0] )
        cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
