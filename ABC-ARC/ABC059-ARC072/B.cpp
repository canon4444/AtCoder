#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    int alen = A.length(), blen = B.length();


    int ans = 0;
    if( alen == blen ){
        for( int i = 0; i < alen; ++i ){
            if( A[i] > B[i] ){
                ans = 1;
                break;
            } else if( A[i] < B[i] ){
                ans = -1;
                break;
            }
        }
    } else if( alen > blen ){
        ans = 1;
    } else {
        ans = -1;
    }


    if( ans == 1 ) cout << "GREATER" << endl;
    else if( ans == -1 ) cout << "LESS" << endl;
    else cout << "EQUAL" << endl;


    return 0;
}
