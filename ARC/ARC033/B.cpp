#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int NA, NB;
    cin >> NA >> NB;\

    int tmp;
    map<int, int> AB;
    for( int i = 0; i < NA; ++i ){
        cin >> tmp;
        if( AB.find(tmp) == AB.end() ) AB[tmp] = 1;
        else ++AB[tmp];
    }
    for( int i = 0; i < NB; ++i ){
        cin >> tmp;
        if( AB.find(tmp) != AB.end() ) ++AB[tmp];
        else AB[tmp] = 1;
    }

    int num = 0, den = 0;
    for( auto itr = AB.begin(); itr != AB.end(); ++itr )
        if( itr->second == 2 ) ++num, ++den;
        else ++den;

    printf("%lf\n", (double)num/(double)den);

    return 0;
}
