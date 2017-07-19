#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int b[10];
    for( int i = 0; i < 10; ++i )
        cin >> b[i];

    int N;
    cin >> N;

    long long int a[N], b;
    string str;
    int len;
    for( int i = 0; i < N; ++i ){
        cin >> str;
        len = str.length();

        for( int j = 0; j < len; ++j )
            for( auto k : b ) if( str[j] == k ) a[i] = (a[i] + k) * 10;
        a[i] /= 10;
    }

    qsort(a,);

    for( auto i : a ) cout << i << endl;

    return 0;
}
