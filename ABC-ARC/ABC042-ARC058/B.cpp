#include <iostream>
#include <string>
#include <set>


using namespace std;


int main()
{
    int N, L;
    cin >> N >> L;

    multiset<string> S;
    for( int i = 0; i < N; ++i ){
        string tmp;
        cin >> tmp;
        S.insert(tmp);
    }


    for( auto itr = S.begin(); itr != S.end(); ++itr ){
        cout << *itr;
    }
    cout << endl;


    return 0;
}
