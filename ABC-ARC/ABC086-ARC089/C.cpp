#include <iostream>
#include <vector>
#include <stack>
using namespace std;


struct Axis {
    int x, y;
    int cnt;
};


int main()
{
    int N;
    cin >> N;

    vector<int> t(N), x(N), y(N);
    for( int i = 0; i < N; ++i )
        cin >> t[i] >> x[i] >> y[i];

    // 幅優先探索をして最短の到達時間を調べる
    // 最短より早い到達を求められたら "No"
    // 寄り道ができるかを考える

    Axis axis = { 0, 0, 0 };
    bool ans = true;

    for( int i = 0; i < N; ++i ){
        int ct = t[i], cx = t[i], cy = t[i];
        
        // 幅優先探索
        while( 1 ){
        }


        // 過去の遺産
        Axis axis = { cx, cy, 0 };
        stack<Axis> st;
        st.push(axis);
        for( int j = 0; j < N; ++j ){
            axis = st.top();
            st.pop();
            if( tt < axis.cnt ) break;
            if( axis.x == x[i] && axis.y == y[i] && axis.cnt == tt )
        }
    }


    if( ans ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
