#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N;
    cin >> N;

    if( -1 < (int)N.find("111") ||
        -1 < (int)N.find("222") ||
        -1 < (int)N.find("333") ||
        -1 < (int)N.find("444") ||
        -1 < (int)N.find("555") ||
        -1 < (int)N.find("666") ||
        -1 < (int)N.find("777") ||
        -1 < (int)N.find("888") ||
        -1 < (int)N.find("999") ||
        -1 < (int)N.find("000") ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
