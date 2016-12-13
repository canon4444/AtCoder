#include <iostream>
#include <vector>
 
 
using namespace std;
 
 
int main()
{
    int W, H, N;
    cin >> W >> H >> N;
    
    vector<int> x, y, a;
    for( int i = 0; i < N; ++i ){
        int X, Y, A;
        cin >> X >> Y >> A;
        x.push_back(X);
        y.push_back(Y);
        a.push_back(A);
    }
    
    
    int w_min = 0, w_max = W, h_min = 0, h_max = H;
    for( int i = 0; i < N; ++i ){
        switch( a[i] ){
            case 1: w_min = w_min < x[i] ? x[i] : w_min; break;
            case 2: w_max = x[i] < w_max ? x[i] : w_max; break;
            case 3: h_min = h_min < y[i] ? y[i] : h_min; break;
            case 4: h_max = y[i] < h_max ? y[i] : h_max; break;
        }
    }
    
    
    int ans = (w_max-w_min)*(h_max-h_min);
    if( w_max-w_min < 0 || h_max-h_min < 0 ) ans = 0;
    cout << ans << endl;
    
    
    return 0;
}
