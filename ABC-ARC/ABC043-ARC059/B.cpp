#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main()
{
    string s;
    cin >> s;
    
    
    vector<int> ans;
    int len = s.length();
    for( int i = 0; i < len; ++i ){
        switch( s.c_str()[i] ){
            case '0': ans.push_back(0); break; 
            case '1': ans.push_back(1); break;
            case 'B': if( !ans.empty() ) ans.pop_back(); break;
        }
    }
    
    
    for( auto itr = ans.begin(); itr != ans.end(); ++itr ){
        cout << *itr;
    }
    cout << endl;
    
    
    return 0;
}
