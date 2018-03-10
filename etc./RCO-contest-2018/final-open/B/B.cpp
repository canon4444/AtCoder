#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));


    int N, M, Q;
    cin >> N >> M >> Q;


    char S[3001];
    for( int i = 0; i < N; ++i )
        S[i] = (char)('a'+rand()%26);
    S[3000] = '\0';

    double D = rand()%100 + 1;
    if( 9 < D ) D /= 10.0;

    cout << S << endl;
    cout << D << endl;


    vector<string> q(Q);
    for( int i = 0; i < Q; ++i )
        cin >> q[i];


    for( int i = 0; i < Q; ++i )
        cout << rand()%N << endl;


    return 0;
}
