#include <iostream>
#include <string>


using namespace std;


int main()
{
    string s;
    long int K;
    cin >> s >> K;


    int len = (int)(s.length());

    for( int i = 0; 0 < K && i < len; ++i ){
        if( s[i] == 'a' ) continue;

        int cost = ('z' - s[i]) % 'z' + 1;
        //cout << "cost:" << cost << " K:" << K;
        if( cost <= K ){
            K -= cost;
            s.replace(i, 1, "a");
        }
        //cout << " s:" << s << endl;
    }

    //cout << "K:" << K << endl;

    if( 0 < K ){
        s[len - 1] = ((s[len - 1] - 'a') + K) % 26 + 'a';
    }


    cout << s << endl;


    return 0;
}
