#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct AB {
    int a;
    int b;
    
    bool operator<( const AB& right ) const {
        return a == right.a ? a < right.a : b < right.b;
    }
};


int main()
{
    int N, M;
    cin >> N >> M;

    vector<AB> ab(M);
    for( int i = 0; i < M; ++i ){
        int tmpa, tmpb;
        cin >> tmpa >> tmpb;
        ab[i].a = tmpa;
        ab[i].b = tmpb;;
        if( ab[i].b < ab[i].a )
            swap(ab[i].a, ab[i].b);
    }
    
    vector<int> ans(N, 0);
    for( auto itr = ab.begin(); itr != ab.end(); ++itr ){
        ++ans[itr->a-1];
        ++ans[itr->b-1];
    }


    for( int i = 0; i < N; ++i ){
        cout << ans[i] << endl;
    }
    
    
    return 0;
}
