#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;


    if( a[0] == '-' && b[0] == '-' ){
        // {N(b) - N(a)} % 2 == 1  ->  Negative
        if( a[a.length()-1]%2 == b[b.length()-1]%2 )
            cout << "Negative" << endl;
        else // {N(b) - N(a)} % 2 == 0  ->  Positive
            cout << "Positive" << endl;
    } else if( a[0] == '-' && b[0] != '-' ){
        cout << "Zero" << endl;
    } else if( a[0] == '0' ){
        cout << "Zero" << endl;
    } else {
        cout << "Positive" << endl;
    }


    return 0;
}
