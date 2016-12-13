#include <iostream>
#include <set>
 
 
using namespace std;
 
 
int main()
{
    set<int> a;
    for( int i = 0; i < 3; ++i ){
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }
    
    
    cout << a.size() << endl;
    
    
    return 0;
}
