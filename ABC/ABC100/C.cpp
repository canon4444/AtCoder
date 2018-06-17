#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long int> a(N);
    for( int i = 0; i < N; ++i )
        cin >> a[i];

    vector<long int> even;
    even.push_back(2);
    for( int i = 0; ; ++i ){
        if( even[i]*2 < 10e9+1 )
            even.push_back(even[i]*2);
        else
            break;
    }

    int ans = 0;
    int len = (int)even.size();
    for( int i = 0; i < N; ++i ){
        for( int j = len-1; -1 < j; --j ){
            if( a[i]%even[j] == 0 ){
                ans += j + 1;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
