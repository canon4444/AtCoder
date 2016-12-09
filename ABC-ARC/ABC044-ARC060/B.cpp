#include <iostream>
#include <string>
#include <map>


using namespace std;


int main()
{
    string w;
    cin >> w;
    
    int len = w.length();
    map<char, int> ans;
    for( int i = 0; i < len; ++i ){
        char tmp = w.c_str()[i];
        if( ans.find(tmp) == ans.end() ) ans[tmp] = 1;
        else ++ans[tmp];
    }
    
    
    for( auto itr = ans.begin(); itr != ans.end(); ++itr ){
        if( itr->second % 2 ){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    
    
    return 0;
}
