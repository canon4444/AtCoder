#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    for( int i = 1; i <= N; ++i )
        if( i != M ){
            cout << i << endl;
            return 0;
        }

    return 0;
}
