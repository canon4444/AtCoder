#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<string> S;


    cin >> n;

    for( int i = 0; i < n; ++i ){
        string str;
        cin >> str;
        S.push_back(str);
    }


    int moji[26] = { 0 };
    for( int i = 0; i < n; ++i ){
        int tmp[26] = { 0 };
        int len = S[i].length();

        for( int j = 0; j < len; ++j ){ //各アルファベットの個数を調べる
            ++tmp[S[i].c_str()[j]-'a'];
        }

        for( int j = 0; j < 26; ++j ){ //使えるアルファベットを調べる
            if( i == 0 ) moji[j] = tmp[j];
            if( tmp[j] < moji[j] ) moji[j] = tmp[j];
        }
    }


    for( int i = 0; i < 26; ++i ){
        for( int j = 0; j < moji[i]; ++j ){
            cout << (char)('a'+i);
        }
    }
    cout << endl;


    return 0;
}
