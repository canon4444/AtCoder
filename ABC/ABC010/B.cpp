#include <iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;

    int a[10];
    for( int i = 0; i < n; ++i ){
        cin >> a[i];
    }


    int ans = 0;
    for( int i = 0; i < n; ++i ){
        if( a[i]%2 == 0 ) --a[i], ++ans; //「好き」「嫌い」「好き」「嫌い」「好き」「嫌い」……
        if( a[i]%3 == 2 ) a[i] -= 2, ans += 2; //「好き」「嫌い」「大好き」「好き」「嫌い」「大好き」「好き」「嫌い」「大好き」……
    }


    cout << ans << endl;


    return 0;
}
