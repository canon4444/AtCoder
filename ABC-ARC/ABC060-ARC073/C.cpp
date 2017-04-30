#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int N, T;
    cin >> N >> T;
    
    vector<int> t;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        t.push_back(tmp);
    }
    
    
    int ans = T;
    for( int i = 0; i < N-1; ++i ){
        ans += T;
        int loss = t[i+1] - (t[i]+T);
        if( loss < 0 ) ans += loss;
    }
    
    
    cout << ans << endl;
    
    
    return 0;
}
