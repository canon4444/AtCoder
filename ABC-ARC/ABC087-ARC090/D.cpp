#include <iostream>
#include <vector>
#include <string>
using namespace std;




int main()
{
    int N, M;
    cin >> N >> M;

    vector<long long int> L(M), R(M), D(M);
    for( int i = 0; i < M; ++i )
        cin >> L[i] >> R[i] >> D[i];


    vector<string> x;
    for( int i = 0; i < M; ++i ){
        if( i == 0 ){
            x.push_back("n" + to_string(L[i]));
            x.push_back(      to_string(D[i]));
            x.push_back("n" + to_string(R[i]));
        } else {
            auto itr = find(x.begin(), x.end(), "n"+to_string(L[i]))
;
