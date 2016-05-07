#include <iostream>

using namespace std;


int main()
{
    int A, B, C;
    cin >> A >> B >> C;


    int ans;
    if( A < B ){
        ans = C / A;
        C %= A;
        ans += C / B;
    } else {
        ans = C / B;
        C %= B;
        ans += C / A;
    }


    cout << ans << endl;


    return 0;
}
