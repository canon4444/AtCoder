#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B, N;
    string X;
    cin >> A >> B >> N >> X;

    for( int i = 0; i < N; ++i ){
        switch( X[i] ){
        case 'S': --A; break;
        case 'C': --B; break;
        case 'E': A < B ? --B : --A; break;
        }
    }

    cout << (A < 1 ? 0 : A) << endl << (B < 1 ? 0 : B) << endl;
    return 0;
}
