#include <iostream>
#include <vector>
#include <set>
 
 
using namespace std;
 
 
int main()
{
    vector<int> v;
    set<int> s;
 
    for( int i = 0; i < 3; ++i ){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        s.insert(tmp);
    }
 
 
    int rank = 3, ansA = 0, ansB = 0, ansC = 0;
 
    for( auto itr = s.begin(); itr != s.end(); ++itr ){
        for( int i = 0; i < 3; ++i ){
            if( *itr == v[i] ){
                switch( i ){
                case 0: ansA = rank; break;
                case 1: ansB = rank; break;
                case 2: ansC = rank; break;
                default: break;
                }
            }
        }
        --rank;
    }
 
 
    cout << ansA << endl
             << ansB << endl
             << ansC << endl;
 
 
    return 0;
}
