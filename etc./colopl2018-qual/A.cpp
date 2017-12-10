#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B;
    string S;
    cin >> A >> B >> S;

    cout << ((A <= S.length() && S.length() <= B) ? "YES" : "NO") << endl;

    return 0;
}
