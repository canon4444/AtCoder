#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    for( int i = S.length()-2; 0 < i; i-=2 ){
        string ss = S.substr(0, i);        
        int len = ss.length();
        if( ss.substr(0, len/2) == ss.substr(len/2, len) ){
            cout << len << endl;
            break;
        }
    }


    return 0;
}
