#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int C;
    cin >> C;

    vector<int> N(C), M(C), L(C);
    for( int i = 0; i < C; ++i )
        cin >> N[i] >> M[i] >> L[i];

    for( int i = 0; i < C; ++i ){
        vector<int> t{N[i], M[i], L[i]};
        sort(t.begin(), t.end());
        N[i] = t[0];
        M[i] = t[1];
        L[i] = t[2];
    }

    int a = N[0], b = M[0], c = L[0];
    for( int i = 1; i < C; ++i ){
        a = a < N[i] ? N[i] : a;
        b = b < M[i] ? M[i] : b;
        c = c < L[i] ? L[i] : c;
    }

    cout << a * b * c << endl;

    return 0;
}
