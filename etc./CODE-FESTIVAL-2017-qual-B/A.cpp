#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    cout << S.substr(0, S.length()-8) << endl;

    return 0;
}
