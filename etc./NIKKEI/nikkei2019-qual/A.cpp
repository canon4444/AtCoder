#include <iostream>
using namespace std;

int main()
{
    int N, A, B;

    cin >> N >> A >> B;

    cout << min(A, B) << " ";

    if( min(A, B) - N + max(A, B) < 0 ) cout << 0 << endl;
    else cout << min(A, B) - N + max(A, B) << endl;

    return 0;
}
