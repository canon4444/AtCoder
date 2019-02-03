#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> L(N);
    for( int i = 0; i < N; ++i )
        cin >> L[i];

    int idx = 0;
    for( int i = 0; i < N; ++i )
        if( L[idx] < L[i] ) idx = i;

    int sum = 0;
    for( int i = 0; i <N; ++i )
        if( idx != i ) sum += L[i];

    if( L[idx] < sum ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
