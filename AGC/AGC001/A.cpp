#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> L;
    for( int i = 0; i < 2*N; ++i ){
        int tmp;
        cin >> tmp;
        L.push_back(tmp);
    }
    
    
    //2本の串の長さの差が小さくなるように組み合わせたい
    ////ソート
    sort(L.begin(), L.end());
    
    ////具材を刺していく
    int ans = 0;
    for( int i = 0; i < 2*N; i+=2 ){
        ans += L[i];
    }
    
    
    cout << ans << endl;
    
    return 0;
}
