// https://atcoder.jp/contests/abc166

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void A()
{
  // 入力
  string S;
  cin >> S;
  
  // 出力
  if( S == "ABC" ) cout << "ARC" << endl;
  else cout << "ABC" << endl;
}

void B()
{
  // 入力
  int N, K;
  cin >> N >> K;
  
  vector<int> d(K);
  vector<vector<int>> A;
  for( int i = 0; i < K; ++i ){
    cin >> d[i];
    
    vector<int> a(d[i]);
    for( int j = 0; j < d[i]; ++j ){
      cin >> a[j];
    }
    A.push_back(a);
  }
  
  // すぬけくんを用意する
  // true: いたずらされるすぬけくん
  // false: いたずらされないすぬけくん
  vector<bool> sunuke_kun(N);
  for( int i = 0; i < N; ++i ) sunuke_kun[i] = true;
  
  // お菓子を持っている場合、すぬけくんはいたずらされない
  for( int i = 0; i < K; ++i )
    for( int j = 0; j < d[i]; ++j )
      sunuke_kun[A[i][j]-1] = false;
  
  // いたずらされないすぬけくんの人数を数える
  int ans = 0;
  for( auto i : sunuke_kun )
    if( i ) ++ans;
  
  // 出力
  cout << ans << endl;
}

void C()
{
  // 入力
  int N, M;
  cin >> N >> M;
  
  vector<int> H(N);
  for( int i = 0; i < N; ++i )
    cin >> H[i];
  
  vector<int> A(M), B(M);
  for( int i = 0; i < M; ++i )
    cin >> A[i] >> B[i];
  
  // 展望台を用意する
  // true: 良い展望台
  // false: 良くない展望台
  vector<bool> observatory(N);
  for( int i = 0; i < N; ++i )
    observatory[i] = true;
  
  // 各展望台が良い展望台か確認する
  // 同じ高さの場合については問題文に記載なし
  // 入力例2と合うようにする
  for( int i = 0; i < M; ++i )
    if( H[A[i]-1] == H[B[i]-1] ){
      observatory[A[i]-1] = false;
      observatory[B[i]-1] = false;
    } else if( H[A[i]-1] < H[B[i]-1] ){
      observatory[A[i]-1] = false;
    } else {
      observatory[B[i]-1] = false;
    }
  
  // 良い展望台の数を数える
  int ans = 0;
  for( auto i : observatory )
    if( i ) ++ans;
  
  // 出力
  cout << ans << endl;
}

void D()
{
  // 入力
  int X;
  cin >> X;
  
  // A, Bの値を二重ループで探索する
  int max = 1000, min = -max;
  for( int A = min; A <= max; ++A )
    for( int B = min; B <= max; ++B )
      if( (int)X == (int)pow(A, 5) - (int)pow(B, 5) ){
        cout << A << " " << B << endl;
        return;
      }
}

int main()
{
  //A();
  //B();
  //C();
  D();
  
  return 0;
}
