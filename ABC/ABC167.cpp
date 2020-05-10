#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct structC {
  int C;
  vector<int> A;
  
  bool operator<( const structC& right ) const {
    return C == right.C ? C < right.C : C < right.C;
  }
};

void A()
{
  // 入力
  string S, T;
  cin >> S >> T;
  
  // 出力
  // Tの先頭からSの長さの部分文字列がSと一致すればOK
  if( S == T.substr(0, (int)S.length()) )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

void B()
{
  // 入力
  int A, B, C, K;
  cin >> A >> B >> C >> K;
  
  // 出力
  // できるだけ1のカードを取る
  // 1のカードだけでたりる
  if( K <= A )
    cout << K << endl;
  // 1と0のカード
  else if( K <= A + B )
    cout << A << endl;
  // 全部のカード
  else
    cout << A - (K - A - B) << endl;
}

void C()
{
  // 入力
  int N, M, X;
  cin >> N >> M >> X;
  
  vector<structC> CA(N);
  for( int i = 0; i < N; ++i ){
    cin >> CA[i].C;
    
    vector<int> tmp(M);
    for( int j = 0; j < M; ++j )
      cin >> tmp[j];
    CA[i].A = tmp;
  }
  
  // Cが小さい順にソート
  sort(CA.begin(), CA.end());
  
  // どの本を買うか、全列挙する
  vector<vector<int>> textBooks;
  for( int i = -1; i < N; ++i ){
    if( i == -1 ){
      vector<int> tmp(N, 0);
      textBooks.push_back(tmp);
    } else {
      for( auto j : textBooks ){
        vector<int> tmp = j;
        tmp[i] = 1;
        textBooks.push_back(tmp);
      }
    }
  }
  
  // 全列挙に応じて、高橋くんが十分に学べるか、その金額はいくらか計算する
  int ans = -1;
  for( auto isBuyBook : textBooks ){
    int tns = 0;
    vector<int> studyingAlgorithm(M, 0);
    for( int j = 0; j < N; ++j ){
      // 買わない本は飛ばす
      if( isBuyBook[j] == 0 ) continue;
      
      // 金額と理解度を足す
      tns += CA[j].C;
      for( int k = 0; k < M; ++k )
        studyingAlgorithm[k] += CA[j].A[k];
    }
    
    // 理解度チェック
    bool isPerfect = true;
    for( int k = 0; k < M; ++k )
      if( studyingAlgorithm[k] < X )
        isPerfect = false;
      
    if( isPerfect ){
      if( ans == -1 ) ans = tns;
      else ans = min(ans, tns);
    }
  }
  
  cout << ans << endl;
}

int main()
{
  //A();
  //B();
  C();
  
  return 0;
}
