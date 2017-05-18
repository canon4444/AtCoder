#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct St {
    int a;
    int b;
 
    bool operator<( const St& right ) const {
        return a == right.a ? a < right.a : a < right.a;
    }
};
 
int main()
{
    int N;
    long long int K;
    cin >> N >> K;
 
    vector<St> st(N);
    for( int i = 0; i < N; ++i ){
        cin >> st[i].a >> st[i].b;
    }
 
    sort(st.begin(), st.end());
 
    long long int cnt = 0;
    for( int i = 0; i < N; ++i ){
        cnt += st[i].b;
        if( K <= cnt ){
            cout << st[i].a << endl;
            break;
        }
    }
 
    return 0;
}
