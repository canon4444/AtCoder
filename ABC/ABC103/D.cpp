#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int a[100000] = { 0 }, b[100000] = { 0 };
    for( int i = 0; i < M; ++i )
        cin >> a[i] >> b[i];

    int ans = 0;
    int c[100000] = { 0 }; // 橋
    int d[100000] = { 0 }; // 島
    int e[100000] = { 0 }, cnt = 0; // 区切りの島

    for( int i = 0; i < N-1; ++i )
        d[i] = M + 1;

    for( int i = 0; i < M; ++i ){
        if( a[i]-b[i] == -1 ){
            ++ans;
            continue;
        }

        for( int j = a[i]-1; j < b[i]-1; ++j )
            c[i] += 1;

        if( d[a[i]-1] == M+1 ) d[a[i]-1] = 0;
        ++d[a[i]-1];
        if( d[b[i]-1] == M+1 ) d[b[i]-1] = 0;
        --d[b[i]-1];
    }

    if( ans == N-1 ){ // 全ての橋を陥落済み
        cout << ans << endl;
        return 0;
    }

    for( int i = 0; i < N-1; ++i )
        if( d[i] == 0 ) e[cnt++] = i;

    if( cnt == 0 ){
        ans = 1;
    } else {
        e[cnt] = N;
        ++cnt;
    }

    for( int i = 0; i < cnt; ++i ){
        int max = 0;

        for( int j = 0; j < e[i]; ++j )
            if( max < c[j] ) max = c[j];

        for( int j = 0; j < e[i]; ++j )
            if( max == c[j] ) ++ans;
    }

    cout << ans << endl;

    return 0;
}
