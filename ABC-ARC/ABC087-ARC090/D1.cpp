#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int to, cost;
};


bool DFS(vector<Edge> *G, vector<> d, vector<> used)
{
    // 再帰で書きたい   
}


int main()
{
    int N, M;
    cin >> N >> M;

    vector<Edge> G[N];
    for( int i = 0; i < M; ++i ){
        int L, R, D;
        cin >> L >> R >> D;
        G[L].push_back( { R,  D } );
        G[R].push_back( { L, -D } );
    }


    vector<int> d(N) = { 0 };
    vector<bool> used(N) = { false };

    if( DFS(G, d, used) ) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
