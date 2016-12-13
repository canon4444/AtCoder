#include <iostream>
#include <string>
 
 
using namespace std;
 
 
int main()
{
    string S;
    cin >> S;
    
    
    int ans = 0;
    int len = S.length();
    for( int i = 0; i < len-1; ++i ){
        if( S.c_str()[i] != S.c_str()[i+1] ){
            ++ans;
        }
    }
    
    
    cout << ans << endl;
    
    
    return 0;
}
