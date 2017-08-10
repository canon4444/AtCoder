#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long int> a(N);
    int two = 0, four = 0;
    for( int i = 0; i < N; ++i ){
        cin >> a[i];
        if( a[i]%4 == 0 ) ++four;
        else if( a[i]%2 == 0 ) ++two;
    }


    if( N/2 <= four+two/2 ) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
