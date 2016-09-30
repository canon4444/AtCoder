#include <iostream>
#include <string>
#include <map>


using namespace std;


int main()
{
    string S;
    cin >> S;


    map<int, int> table;
    for( int i = 'A'; i < 'G'; ++i ){
        table[i] = 0;
    }

    int len = (int)S.length();
    for( int i = 0; i < len; ++i ){
        table[S.c_str()[i]] += 1;
    }


    for( int i = 'A'; i < 'G'; ++i ){
        cout << table[i];
        if( i + 1 != 'G' ) cout << " ";
        else cout << endl;
    }


    return 0;
}
