#include <iostream>
#include <string>
 
 
using namespace std;
 
 
int main()
{
    string S;
    cin >> S;
    
    
    if( S.c_str()[S.length()-1] == 'T' ) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
    return 0;
}
