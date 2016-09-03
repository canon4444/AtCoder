#include <iostream>
#include <map>


using namespace std;


int main()
{
    int N;
    cin >> N;

    map<int, int> A;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        if( A.find(tmp) == A.end() ) A[tmp] = 1;
        else A[tmp] += 1;
    }


    int ans = 0;
    for( auto itr = A.begin(); itr != A.end(); ++itr ){
        if( 1 < itr->second ) ans += (itr->second - 1);
    }


    cout << ans << endl;


    return 0;
}
