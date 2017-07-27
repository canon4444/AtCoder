#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct A {
    string str;
    long long int val;
};

int for_qsort(const void *a, const void *b)
{
    A c = *(A *)a, d = *(A *)b;
    return (int)(c.val - d.val);
}

int main()
{
    int b[10];
    for( int i = 0; i < 10; ++i )
        cin >> b[i];

    int N;
    cin >> N;

    A a[N];
    int len;
    for( int i = 0; i < N; ++i ){
        cin >> a[i].str;
        len = a[i].str.length();

        for( int j = 0; j < len; ++j )
            for( auto k : b ) if( a[i].str[j] == k ) a[i].val = a[i].val * 10 + k;
    }

    qsort(a, N, sizeof(long long int), for_qsort);

    for( auto i : a ) cout << i.str << endl;

    return 0;
}
