#include <iostream>
#include <vector>
using namespace std;


class Comp { // idxをvに連動
public:
    const vector<long long int> &_v;
    Comp(const vector<long long int> &v): _v(v) {}
    bool operator()(int a, int b) { return _v[a] > _v[b]; } // 降順
};


int main()
{
    int D, G;
    cin >> D >> G;

    vector<long long int> p(D), c(D);
    for( int i = 0; i < D; ++i )
        cin >> p[i] >> c[i];

    long long int ans = G, score = 0;

    // c[i]なしで済むかどうか
    for( int i = 0; i < D; ++i ){
        if( G <= 100 * (i+1) * (p[i]-1) )
            ans = min(ans, G / (100 * (i+1)));
    }

    // c[i]も合わせて
    for( int i = 0; i < D; ++i ){
        if( G <= 100 * (i+1) * p[i] + c[i] )
            ans = min(ans,100 * (i+1) * p[i] + c[i]);
    }

    vector<int> idx(D);
    for( int i = 0; i < D; ++i )
        idx[i] = i;

    sort(idx.begin(), idx.end(), Comp(p));

    // 大きい
    for( int i = 0; i < D; ++i ){
        ans += p[index[i]];
        score += 100 * (index[i]+1) * p[index[i]] + c[index[i]];
        if( G <= score ){
            if( G <= score - (c[i] + 100 * (index[i]+1)) ){
                score -= c[i] + 100 * (index[i]+1);
                while( G <= score ) score -= 100 * (index[i]+1);
                score += 100 * (index[i]+1);
            }
            break;
        }
    }






/*
    long long int ans = 0, sum = 0, lim = 0;
    int solve[55][10] = { { 0 } };

    for( int i = 1; i < D+1; ++i )
        lim += i;

    for( int i = 0; i < D; ++i )
        for( int j = 0; j < D; ++j )
            if( i == j ) solve[i][j] = 1;
            else solve[i][j] = 0;

    for( int i = 0; i < lim
    for( int j = 0; j < D; ++j )
*/
