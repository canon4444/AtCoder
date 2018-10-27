#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for( int i = 0; i < N; ++i )
        cin >> A[i];

    sort(A.begin(), A.end());

    long long int ans = 0;
    int p = 1, r = N-2;
    vector<int> B;

    B.push_back(A[N-1]);

    B.insert(B.begin(), A[0]);

    for( int i = 1; i < N-1; ++i ){
        if( i % 2 ){ // rear
            if( abs(B.front()-A[r]) < abs(B.back()-A[r]) ){
                B.push_back(A[i]);
                A.erase(A.begin()+i);
            }
            --r;
        } else {
            ++p;
        }
    }

    cout << (b < c ? c : b) << endl;

    return 0;
}
