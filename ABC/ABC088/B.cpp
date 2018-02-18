#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for( int i = 0; i < N; ++i )
        cin >> a[i];


    sort(a.begin(), a.end(), std::greater<int>());

    int alice = 0, bob = 0;
    for( int i = 0; i < N; ++i ){
        if( (i&1) == 0 ) alice += a[i];
        else bob += a[i];
    }


    cout << alice-bob << endl;

    return 0;
}
