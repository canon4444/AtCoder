#include <iostream>
#include <vector>


using namespace std;


int main()
{
    int N, S, T;
    cin >> N >> S >> T;
    
    vector<int> A;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    
    
    int ans = 0;
    long int x = 0;
    for( auto itr = A.begin(); itr != A.end(); ++itr ){
        x += *itr;
        if( S <= x && x <= T ) ++ans;
    }
    
    
    cout << ans << endl;

    
    return 0;
}
