#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    cout << A - (A % B) << endl;
    return 0;
}
