// WA

#include <iostream>
#include <vector>
#include <algorithm>
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
                B.push_back(A[r]);
            } else {
                B.insert(B.begin(), A[r]);
            }
            --r;
        } else {
            if( abs(B.front()-A[p]) < abs(B.back()-A[p]) ){
                B.push_back(A[p]);
            } else {
                B.insert(B.begin(), A[p]);
            }
            ++p;
        }
    }

/*
    for( int i = 0; i < N-1; ++i )
        cout << B[i] << " ";
    cout << B[N-1] << endl;
*/

    for( int i = 0; i < N-1; ++i )
        ans += abs(B[i] - B[i+1]);

    cout << ans << endl;

    return 0;
}
