#include <iostream>
using namespace std;

int main()
{
    int K;
    cin >> K;

    int odd, even;

    if( K % 2 ){
        odd = K / 2 + 1;
        even = K / 2;
    } else {
        odd = K / 2;
        even = K / 2;
    }

    cout << odd * even << endl;

    return 0;
}
