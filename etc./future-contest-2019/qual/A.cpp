#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N, M, L;
    cin >> N >> M >> L;

    vector<string> S(N);
    for( int i = 0; i < N; ++i )
        cin >> S[i];


    for( int i = 0; i < M; ++i ){
        for( int j = 0; j < M; ++j ){
            if( i == 0 || j == 0 || j == M-1 || i == M-1 )
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
    }

    return 0;
}
