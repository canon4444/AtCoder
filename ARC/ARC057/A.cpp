#include <iostream>

using namespace std;


int main()
{
    long int A;
    int K;
    cin >> A >> K;
    
    long int t = A;
    int ans;
    if( K == 0 ){
        cout << 2*1000000000000 - A << endl;
    } else {
        for( ans = 0; t < 2*1000000000000; ++ans ){
            //cout << "t[" << ans << "] = " << t << " + " << K*t << " = ";
            t += 1 + K*t;
            //cout << t << endl;
        }
        cout << ans << endl;
    }
    
    return 0;
}
