#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string s[3];
    for( int i = 0; i < 3; ++i )
        cin >> s[i];
    
    for( int i = 0; i < 3; ++i )
        cout << char(s[i].c_str()[0]-'a'+'A');
    cout << endl;
    
    return 0;
}
