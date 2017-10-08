#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long int N;
    cin >> N;

    vector<long long int> D(N);
    for( int i = 0; i < N; ++i ) cin >> D[i];

    long long int M;
    cin >> M;

    vector<long long int> T(M);
    for( int i = 0; i < M; ++i ) cin >> T[i];


    if( N < M ){
        cout << "NO" << endl;
        return 0;
    }


    sort(D.begin(), D.end());
    sort(T.begin(), T.end());


    if( T[0] < D[0] || D.back() < T.back() ){
        cout << "NO" << endl;
        return 0;
    }


    int j = 0;
    for( int i = 0; i < M; ++i ){
        for( ; j < N; ){
            //cout << "D[" << j << "]=" << D[j] << "  T[" << i << "]=" << T[i] << endl;
            if( D[j] == T[i] ){ ++j; break; }
            else if( D[j] < T[i] ){ ++j; continue; }
            else if( D[j] > T[i] ){
                cout << "NO" << endl;
                return 0;
            }
        }
        //if( j == N ){
        //cout << "NO" << endl;
        //return 0;
        //}
    }


    cout << "YES" << endl;


    return 0;
}
