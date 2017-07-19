#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string S;
    cin >> S;
    
    int ans[50] = { 0 }, len = S.length();
    for( int i = 0; i < len; ++i ){
        ++ans[(int)(S.c_str()[i]-'a')];
        if( 1 < ans[(int)(S.c_str()[i]-'a')] ){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    
    return 0;
}
