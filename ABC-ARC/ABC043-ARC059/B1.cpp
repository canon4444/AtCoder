#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();
    vector<char> ans;
    for( int i = 0; i < len; ++i ){
        if( s[i] != 'B' ) ans.push_back(s[i]);
        else if( !ans.empty() ) ans.pop_back();
    }

    for( auto itr = ans.begin(); itr != ans.end(); ++itr )
        cout << *itr;
    cout << endl;

    return 0;
}
