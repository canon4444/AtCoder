#include <iostream>
#include <string>


using namespace std;


int main()
{
    string s;
    cin >> s;
    
    
    auto c = s.find("C");
    auto f = s.find("F", c);
    
    if( f != string::npos ) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    
    return 0;
}
