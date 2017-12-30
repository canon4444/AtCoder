#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;


void A(int N, vector<int> a)
{
  int ans = 0;
  for( int i = 0; i < N; ++i )
    ans = ans < a[i] ? a[i] : ans;
  cout << ans << endl;
}


void B(int N, vector<int> a)
{
  int ans = 0;
  for( int i = 0; i < N; ++i )
    ans += a[i];
  cout << ans << endl;
}


void C(int N, vector<int> a)
{
  for( int i = 0; i < N; ++i ){
    cout << a[i];
    if( i != N-1 ) cout << ",";
    else cout << endl;
  }
}


void D(int N, vector<int> a)
{
  sort(a.begin(), a.end());
  for( int i = 0; i < N; ++i ){
    cout << a[i];
    if( i != N-1 ) cout << " ";
    else cout << endl;
  }
}


void E(int N, vector<int> a)
{
  for( int i = 0; i < N; ++i )
    if( a[i] == 1 ) cout << i+1 << endl;
}


void F(int N, vector<int> a)
{
  int ans = 0;
  for( int i = 0; i < N; ++i )
    for( int j = i; j < N; ++j )
      if( a[i] < a[j] ){
        ++ans;
        break;
      }
  cout << ans << endl;
}


void G(int N, vector<int> a)
{
  string ans = "";
  for( int i = 0; i < N; ++i )
    ans += to_string(a[i]);
  cout << atoll(ans.c_str())%1000000007 << endl;
}


int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  for( int i = 0; i < N; ++i ) cin >> a[i];

  G(N, a);

  return 0;
}
