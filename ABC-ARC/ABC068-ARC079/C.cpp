#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> sn, en;
    for( int i = 0; i < M; ++i ){
        int c, d;
        cin >> c >> d;
        if( c == 1 ) sn.push_back(d);
        else if( d == N ) en.push_back(c);
    }


    sort(sn.begin(), sn.end());
    sort(en.begin(), en.end());


    int s_size = sn.size(), e_size = en.size();
    for( int i = 0, j = 0; i < s_size; ++i, j=j==0?0:j-1 ){
        for( ; j < e_size; ++j ){
            if( sn[i] < en[j] ) break;
            if( sn[i] == en[j] ){
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }


    cout << "IMPOSSIBLE" << endl;

 
    return 0;
}
