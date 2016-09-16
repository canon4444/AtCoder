#include <iostream>
#include <map>


using namespace std;


int main()
{
    map<int, int> l;
    for( int i = 0; i < 3; ++i ){
        int tmp;
        cin >> tmp;
        if( l.find(tmp) == l.end() ) l[tmp] = 1;
        else l[tmp] += 1;
    }


    for( auto itr = l.begin(); itr != l.end(); ++itr ){
        if( itr->second != 2 ) cout << itr->first << endl;
    }


    return 0;
}
