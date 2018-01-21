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


    bool ans = true;
    for( int i = 0; i < N; ++i ){
        int tt = t[i], cx = 0, cy = 0;
        if( 0 < i ){
            tt -= t[i-1];
            cx = x[i-1];
            cy = y[i-1];
        }

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
