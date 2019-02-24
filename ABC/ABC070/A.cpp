#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if( N/100 == N%10 ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
