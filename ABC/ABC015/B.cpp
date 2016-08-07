#include <iostream>
#include <vector>
#include <cmath>


using namespace std;


int main()
{
    int N;
    cin >> N;

    vector<int> A;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }


    int param = 0;
    int sum_bag = 0;
    for( auto itr = A.begin(); itr != A.end(); ++itr ){
        if( *itr == 0 ) continue;
        
        ++param;
        sum_bag += *itr;
    }


    if( param == 0 ) cout << 0 << endl;
    else cout << ceil((double)sum_bag/param) << endl;


    return 0;
}
