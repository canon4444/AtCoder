#include <iostream>
using namespace std;

int main()
{
    char s[4];
    cin >> s;

    int ans = 0;
    for( int i = 0; i < 3; ++i )
        ans += s[i] - '0';

    cout << ans << endl;

    return 0;
}
