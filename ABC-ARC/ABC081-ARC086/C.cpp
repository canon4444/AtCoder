#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    map<int, int> A;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        if( A.find(tmp) != A.end() ) A[tmp] += 1;
        else A[tmp] = 1;
    }

    int M = A.size();
    int ans = 0;

    if( K < M ){
        vector<int> AA(M);
        int cnt = 0;
        for( auto itr = A.begin(); itr != A.end(); ++itr )
            AA[cnt++] = itr->second;

        sort(AA.begin(), AA.end());

        for( int i = 0; i <  M-K; ++i )
            ans += AA[i];
    }


    cout << ans << endl;

    return 0;
}
