#include <iostream>
#include <string>

using namespace std;

int main()
{
    string O, E;
    cin >> O >> E;

    int len_o = O.length(), len_e = E.length();
    for( int i = 0, j = 0; i < len_o || j < len_e; ++i, ++j ){
        if( i < len_o ) cout << O.c_str()[i];
        if( j < len_e ) cout << E.c_str()[j];
    }
    cout << endl;

    return 0;
}
