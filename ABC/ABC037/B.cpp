#include <iostream>

using namespace std;


int main()
{
    int N, Q;
    cin >> N >> Q;

    int L[100], R[100], T[100];
    for( int i = 0; i < Q; ++i ){
        cin >> L[i] >> R[i] >> T[i];
    }


    int sequence[100] = { 0 };
    for( int i = 0; i < Q; ++i ){
        for( int j = L[i]-1; j < R[i]; ++j )
            sequence[j] = T[i];
    }


    for( int i = 0; i < N; ++i ){
        cout << sequence[i] << endl;
    }


    return 0;
}
