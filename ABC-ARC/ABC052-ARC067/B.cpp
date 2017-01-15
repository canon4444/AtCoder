#include <iostream>
#include <string>


using namespace std;


int main()
{
    int N;
    string S;

    cin >> N >> S;


    int ans = 0;
    int x = 0;
    int len = S.length();

    for( int i = 0; i < len; ++i ){
        if( S.c_str()[i] == 'I' ) ++x;
        else --x;
        if( ans < x ) ans = x;
    }


    cout << ans << endl;


    return 0;
}
