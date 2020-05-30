#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
void A()
{
    // 入力
    string N;
    cin >> N;
    
    // 出力
    if( N.find("7") != string::npos )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
 
void B()
{
    // 入力
    int N;
    cin >> N;
    
    long long int ans = 0;
    
    // "Fizz", "Buzz", "FizzBuzz"のいずれでもない場合を合算する
    for( int i = 1; i < N+1; ++i )
        if( (i % 3 != 0) && (i % 5 != 0) )
            ans += i;
 
    // 出力
    cout << ans << endl;
}
 
long long int gcd(long long int a, long long int b)
{
    long long int ret;
     
    if( a < b ){
        long long int tmp = a;
        a = b;
        b = tmp;
    }
     
    if( b == 0 ) return a;
     
    ret = a % b;
    ret = gcd(b, ret);
     
    return ret;
}
 
void C()
{
    // 入力
    int K;
    cin >> K;
    
    int ans = 0;
    
    // 2重GCDで解ける
    for( int a = 1; a < K+1; ++a )
        for( int b = 1; b < K+1; ++b )
            for( int c = 1; c < K+1; ++c )
                ans += gcd(gcd(a, b), c);

 // 出力
    cout << ans << endl;
}
 
void D()
{
    // 入力
    int N;
    string S;
    cin >> N >> S;
    
    // R, G, Bの個数を数える
    // int型だとansに代入する際に桁漏れするので、あらかじめlong long int型にするか、代入するときにキャストする
    // long long int R = 0, G = 0, B = 0;
    int R = 0, G = 0, B = 0;
    for( int i = 0; i < N; ++i )
        switch( S[i] ){
            case 'R': ++R; break;
            case 'G': ++G; break;
            case 'B': ++B; break;
        }
    
    // {R, G, B}の組合せの数
    // 必ずR, G, Bそれぞれひとつずつの組合せになるが、i < j < k順に並びかえればいいので、それぞれの個数をかけた値になる
    long long int ans = (long long int)R * G * B;

    // (j − i) == (k − j)の組合せの数を引く
    // i, jが決まればkを求められる
    for( int i = 1; i < N+1; ++i )
        for( int j = i+1; j < N+1; ++j ){
            int k = 2*j - i;
            if( k < j || N < k ) continue;
            if( S[i-1] != S[j-1] && S[j-1] != S[k-1] && S[k-1] != S[i-1] )
                --ans;
        }
    
    // 出力
    cout << ans << endl;   
}
 
int main()
{
    //A();
    //B();
    //C();
    D();
    
    return 0;
}
