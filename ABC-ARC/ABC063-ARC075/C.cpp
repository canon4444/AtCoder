#include <iostream>
#include <set>

using namespace std;

int min(int a, int b)
{
    if( a < b ) return a;
    else return b;
}

int main()
{
    int N;
    cin >> N;

    set<int> s;
    int sum = 0;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        s.insert(tmp);
        sum += tmp;
    }

    int diff = 0;
    for( auto itr = s.begin(); itr != s.end(); ++itr ){
        if( (sum-diff)%10 == 0 ) diff = min(*itr, diff+*itr);
    }

    if( (sum-diff)%10 == 0 ) cout << 0 << endl;
    else cout << sum-diff << endl;

    return 0;
}
