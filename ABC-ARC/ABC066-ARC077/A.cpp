#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> x;
    for( int i = 0; i < 3; ++i ){
        int tmp;
        cin >> tmp;
        x.insert(tmp);
    }

    auto itr = x.begin();
    int ans = *itr;
    ++itr;
    ans += *itr;

    cout << ans << endl;

    return 0;
}
