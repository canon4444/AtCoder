#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string S;
    cin >> S;
 
    if( S.find("YAKI") == 0 ) cout << "Yes" << endl;
    else cout << "No" << endl;
 
    return 0;
}
