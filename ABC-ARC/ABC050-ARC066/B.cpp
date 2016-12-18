#include <iostream>
#include <vector>


using namespace std;


int main()
{
    int N;
    vector<int> T;
    int M;
    vector<int> P, X;

    cin >> N;

    for( int i = 0; i < N; ++i ){
        int t;
        cin >> t;
        T.push_back(t);
    }

    cin >> M;

    for( int i = 0; i < M; ++i ){
        int p, x;
        cin >> p >> x;
        P.push_back(p);
        X.push_back(x);
    }


    int all_time = 0;
    for( int i = 0; i < N; ++i ) all_time += T[i];


    for( int i = 0; i < M; ++i ) cout << all_time - T[P[i] - 1] + X[i] << endl;


    return 0;
}
