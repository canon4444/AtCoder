// 方針間違い

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct LRC {
    int l, r, c;

    //sort用に演算子をオーバーロード
    bool operator<(const LRC& right) const
        {
            return c == right.c ? true : c < right.c;
        }
};


int main()
{
    int N, L;
    cin >> N >> L;

    vector<LRC> lrc(N);
    for( int i = 0; i < N; ++i )
        cin >> lrc[i].l >> lrc[i].r >> lrc[i].c;

    sort(lrc.rbegin(), lrc.rend());

/*
    cout << "----" << endl;
    for( int i = 0; i < N; ++i )
        cout << lrc[i].l << " " << lrc[i].r << " " << lrc[i].c << endl;
*/

    vector<int> l1(L+2);
    
    for( int i = 0; i < N; ++i ){ // いもす法
        l1[lrc[i].l    ] += 1;
        l1[lrc[i].r + 1] -= 1;
    }

    /*
    for( int i = 1; i < L+2; ++i ) // 累積和：何個の蛍光灯から照らされているか
        l1[i] += l1[i-1];
    */

    int ans = 0;
    for( int i = 0; i < N; ++i )
        ans += lrc[i].c;

    for( int i = 0; i < N; ++i ){
        vector<int> l2 = l1;
        l2[lrc[i].l    ] -= 1;
        l2[lrc[i].r + 1] += 1;

        bool flag = l2[0] == 0 ? false : true;
        for( int j = 1; j < L+1; ++j ){ // 累積和：lrc[i]を消した場合にL[j]を照らしている蛍光灯の数
            l2[j] += l2[j-1];
            if( l2[j] < 1 ) flag = false;
        }

        for( int j = 0; j < L+1; ++j )
            cout << l2[j] << " ";
        cout << endl;

        if( flag ){
            cout << "*" << lrc[i].l << " " << lrc[i].r << " " << lrc[i].c << endl;
            ans -= lrc[i].c;
            l1[lrc[i].l    ] -= 1;
            l1[lrc[i].r + 1] += 1;
        }
    }

    cout << ans << endl;

    return 0;
}
