// https://atcoder.jp/contests/abc169

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
void A()
{
    // 入力
    int A, B;
    cin >> A >> B;
    
    // 出力
    cout << A * B << endl;
}

void B()
{
    // 入力
    int N;
    cin >> N;
    
    vector<unsigned long long int> A(N);
    for( int i = 0; i < N; ++i )
        cin >> A[i];
    
    // 0があるかチェック
    for( auto i : A ){
        if( i == 0 ){
            cout << 0 << endl;
            return;
        }
    }
    
    // 全部かける
    // tmpで桁溢れをチェック
    unsigned long long int mul = 1;
    unsigned long long int tmp = 1;
    for( int i = 0; i < N; ++i ){
        tmp = mul * A[i];

        // 10^18を超えたかチェック
        if( tmp < mul || 1000000000000000000 < tmp ){
            cout << -1 << endl;
            return;
        }
        
        mul = tmp;
    }
    
    // 出力
    cout << mul << endl;
}

void C()
{
    // 入力
    unsigned long long int A;
    double B;
    cin >> A >> B;
    
    // Aはdouble型にキャストすると溢れるので、Bをいい感じにする必要がある
    int intB = (int)B;
    double doubleB = B - (double)intB;
    
    // 整数部分と小数点部分を別に計算する
    unsigned long long int intAns = A * (unsigned long long int)intB;
    unsigned long long int doubleAns = A * (doubleB * 100);
    
    // 出力
    cout << intAns + doubleAns / 100 << endl;
}

int main()
{
    //A();
    //B();
    //C();
    
    return 0;
}
