#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int len = S.length();
    string T = "";

    for( int i = 0; i < len-1; ){
        if( S[i] == 'd' ){
            // "dream"
            i += 5;
            T += "dream";

            // "dream" + "era" でないならば "dreamer"
            if( S[i] == 'e' && S[i+2] != 'a' ){
                i += 2;
                T += "er";
            }

        } else if( S[i] == 'e' ){
            // "erase"
            i += 5;
            T += "erase";

            // "eraser"
            if( S[i] == 'r' ){
                i += 1;
                T += "r";
            }
        } else {
            cout << "NO" << endl;
            return 0;
        }

        if( S.substr(0, i) != T ){
            cout << "NO" << endl;
            return 0;
        }
    }

    if( S == T ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
