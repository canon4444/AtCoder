#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;


    if( S.substr(0, 3) == "yah" && S[3] == S[4] ) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
