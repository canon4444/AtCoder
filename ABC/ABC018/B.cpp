#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


int main()
{
    string S;
    cin >> S;

    int N;
    cin >> N;


    for( int i = 0; i < N; ++i ){
        int l, r;
        cin >> l >> r;

        string s;
        s = S.substr(l-1, r-l+1);
        reverse(s.begin(), s.end());

        S.replace(l-1, r-l+1, s);
    }


    cout << S << endl;


    return 0;
}
