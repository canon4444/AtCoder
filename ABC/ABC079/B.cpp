#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long int L0 = 2, L1 = 1, Li = 1;
    for( int i = 2; i <= N; ++i ){
        Li = L1 + L0;
        L0 = L1;
        L1 = Li;
    }

    cout << Li << endl;

    return 0;
}
