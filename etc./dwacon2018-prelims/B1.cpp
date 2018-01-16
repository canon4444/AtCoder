#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;


    if( s[0] == '5' ){ // 5 から始まると2525文字列にならない部分列が必ず存在する
        cout << -1 << endl;
        return 0;
    }

    int len = s.length();
    vector<int> two, five;
    int ans = 0;

    for( int i = 0; i < len; ++i ){
        if( s[i] == '2' ) two.push_back(i);
        if( s[i] == '5' ) five.push_back(i);
    }
/* DEBUG
    for( int i = 0; i < len/2; ++i ){
    cout << two[i] << " ";
    } cout << endl;
    for( int i = 0; i <len/2; ++i ){
    cout << five[i] << " ";
    } cout << endl;
/**/

    if( (int)two.size() != (int)five.size() ){ // 2 と 5 の個数が同じでなけれは2525文字列にならない部分列が必ず存在する
        cout << -1 << endl;
        return 0;
    }

    len /= 2; // 2 と 5 の個数が同じであればそれぞれの個数は全体の半分
    for( int i = 0; i < len; ++i ){
        if( two[i] > five[i] ){ // 52 になる
            cout << -1 << endl;
            return 0;
        }
        if( i == 0 ){ // i == 0 は必ず部分列の頭
            ++ans;
            continue;
        }
        bool flag = true;
        for( int j = 0; j < i; ++j ){ // 部分列の頭になるかどうかを調べる
            if( two[i] < five[j] ){
                flag = false;
                break;
            }
        }
        if( flag ) ++ans;
    }


    cout << ans << endl;

    return 0;
}
