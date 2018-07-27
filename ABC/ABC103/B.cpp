#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    if( S == T ){
        cout << "Yes" << endl;
        return 0;
    }

    int len = (int)S.length();
    string tmp;
    for( int i = 0; i < len; ++i ){
        tmp = S.substr(len-1-i, len-1) + S.substr(0, len-1-i);
        //cout << i << " : " << tmp << endl;
        if( T == tmp ){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
