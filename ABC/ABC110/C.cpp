#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    if( S == T ){
        cout << "Yes" << endl;
        return 0;
    }

    map<int, int> sw;
    char c1, c2;
    for( int i = 0; i < S.length(); ++i ){
        if( S[i] == T[i] ) continue;

        c1 = S[i];
        c2 = T[i];

        if( c1 < c2 ){
            if( sw.find(c1) != sw.end() && sw[c1] == c2 ){
                cout << "No" << endl;
                return 0;
            }
            sw[c1] = c2;
        } else {
            if( sw.find(c2) != sw.end() && sw[c2] == c1 ){
                cout << "No" << endl;
                return 0;
            }
            sw[c2] = c1;
        }

        
        for( int j = 0; j < S.length(); ++j ){
            if( S[j] == c1 )
                S[j] = c2;
            else if( S[j] == c2 )
                S[j] = c1;

            //cout << "S(" << S[j] << "," << c1 << "): " << S << endl;

            if( S == T ){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
