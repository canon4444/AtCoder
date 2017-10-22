#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for( int i = 0; i < N; ++i ) cin >> A[i];


    long long int ans = pow(3, N);
    long long int odd = 1;
    for( int i = 0; i < N; ++i ){
        if( A[i]%2 == 0 ) odd *= 2;
    }
    

    cout << ans-odd << endl;

    return 0;
}
