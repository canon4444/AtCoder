#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    srand(time(0));

    int N = rand() % 100000;
    int D = rand() % 1000000000;

    if( N < 3 ) N += 3;

    cout << N << " " << D << endl;

    vector<int> X(N);
    for( int i = 0; i < N; ++i )
        X[i] = rand() % 1000000000;

    sort(X.begin(), X.end());

    for( int i = 0; i < N; ++i )
        cout << X[i] << (i != N-1 ? ' ' : '\n');
    return 0;
}
