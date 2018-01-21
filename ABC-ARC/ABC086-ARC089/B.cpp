#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;


    int c;
    if( 99 <  b ) c = a*1000 + b;
    else if( 9 < b ) c = a*100 + b;
    else c = a*10 + b;

    for( int i = 4; i < 400; ++i ){
        if( c == i*i ){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;


    return 0;
}
