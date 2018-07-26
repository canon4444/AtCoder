#include <iostream>
#include <set>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int tmp;
    set<int> a;
    for( int i = 0; i < N; ++i ){
        cin >> tmp;
        while( tmp % 2 == 0 ) tmp /= 2;
        a.insert(tmp);
    }

    cout << (int)a.size() << endl;

    return 0;
}
