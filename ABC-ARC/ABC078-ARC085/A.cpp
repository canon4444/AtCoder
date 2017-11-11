#include <iostream>
using namespace std;

int main()
{
    char X, Y;
    cin >> X >> Y;
    //cout << (char)X << " " << (char)Y << endl;

    if( X - Y < 0 )      cout << "<" << endl;
    else if( X - Y > 0 ) cout << ">" << endl;
    else cout << "=" << endl;

    return 0;
}
