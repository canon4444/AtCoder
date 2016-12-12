#include <iostream>
#include <string>


using namespace std;


const int a = 0, b = 1, c = 2;


int main()
{
    string S[3];
    cin >> S[a] >> S[b] >> S[c];


    int ans = a;
    while( 1 ){
        if( S[ans].length() == 0 ) break;

        int tmp;
        switch( S[ans].c_str()[0] ){
            case 'a': tmp = a; break;
            case 'b': tmp = b; break;
            case 'c': tmp = c; break;
        }

        S[ans].erase(S[ans].begin());

        ans = tmp;
    }


    switch( ans ){
        case a: cout << "A" << endl; break;
        case b: cout << "B" << endl; break;
        case c: cout << "C" << endl; break;
    }


    return 0;
}
