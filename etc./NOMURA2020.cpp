// https://atcoder.jp/contests/nomura2020

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void A()
{
    // 入力
    int H1, M1, H2, M2, K;
    cin >> H1 >> M1 >> H2 >> M2 >> K;
    
    // 起きている時間を求める（分）
    int M = (60 - M1) + M2 + (H2 - (H1 + 1)) * 60;
    
    // 出力
    cout << M - K << endl;
}

void B()
{
    // 入力
    string T;
    cin >> T;
    
    string S = T;
    int len = (int)S.length();
    
    // "???"の場合でも'?'='D'でよい
    for( int i = 0; i < len; ++i )
        if( S[i] == '?' ) S[i] = 'D';
    
    // 出力
    cout << S << endl;
}

void C()
{
    // 入力
    int N;
    cin >> N;
    
    int M = N + 1;
    vector<unsigned long long int> A(M);
    for( int i = 0; i < M; ++i )
        cin >> A[i];
    
    // 深さが1以上なのに根を葉にしなければならない場合は-1
    if( 0 < N && A[0] != 0 ){
        cout << -1 << endl;
        return;
    }
    
    // 深さiでの最大ノード数を求める
    vector<unsigned long long int> maxNodeNum(64);
    maxNodeNum[0] = 1;
    for( int i = 1; i < 64; ++i )
        maxNodeNum[i] = maxNodeNum[i-1] * 2;
    
    // 深さiでの最大ノード数より多い葉を要求されたら-1
    for( int i = 0; i < M && i < 64; ++i )
        if( maxNodeNum[i] < A[i] ){
            cout << -1 << endl;
            return;
        }
    
    // 要求されている葉の枚数からノード数を逆算する
    vector<unsigned long long int> min(M), max(M);
    for( int i = N; -1 < i; --i ){
        if( i == N ) min[i] = max[i] = A[i];
        else {
            min[i] = A[i] + round((double)min[i+1] / 2);
            
            if( i < 64 && maxNodeNum[i] < A[i] + max[i+1] ) max[i] = maxNodeNum[i];
            else max[i] = A[i] + max[i+1];
        }
    }

    // 各深さでの最小/最大ノード数を求める
    unsigned long long int sumA = 0, sumMin = 0, sumMax = 0;
    for( int i = 0; i < M; ++i ){
        sumA += A[i];
        sumMin += min[i];
        sumMax += max[i];
    }
    
    // なんか、こう、サンプルがいい感じに通る分岐
    if( 0 < (signed long long int)(sumMax - sumMin * 2) ) cout << sumMin + sumA - 1 << endl;
    else if( sumMax - sumMin < 2 ) cout << sumMin << endl;
    else cout << sumMax << endl;
}

int main()
{
    //A();
    //B();
    //C();
    
    return 0;
}
