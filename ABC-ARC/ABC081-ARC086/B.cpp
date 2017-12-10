#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long int A[N];
    for( int i = 0; i < N; ++i )
        cin >> A[i];


    int ans = 0, flag = 1;
    while( flag ){
        for( int i = 0; i < N; ++i )
            if( A[i] % 2 == 0 ) A[i] /= 2;
            else flag = 0;

        if( flag ) ++ans;
    }


    cout << ans << endl;

    return 0;
}
