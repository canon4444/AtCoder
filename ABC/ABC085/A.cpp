#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    cout << "2018" << S.substr(4, 6) << endl;

    return 0;
}
