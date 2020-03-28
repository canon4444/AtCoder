#include <iostream>
#include <string>
#include <vector>
using namespace std;

void A()
{
  string S;
  cin >> S;
  
  if( S[2] == S[3] && S[4] == S[5] )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

void B()
{
  int X;
  cin >> X;
  
  int five_hundred = X / 500;
  int five = (X - five_hundred * 500) / 5;
  
  cout << five_hundred * 1000 + five * 5 << endl;
}

void C()
{
  int K, N;
  cin >> K >> N;
  
  vector<int> A(N);
  for( int &i : A )
    cin >> i;
  
  vector<int> distances(N);
  for( int i = 0; i < N; ++i )
    if( i == N-1 )
      distances[i] = abs(K - A[i] + A[0]);
    else
      distances[i] = abs(A[i] - A[i+1]);
  
  int max_distance = distances[0];
  for( int i = 0; i < N; ++i ){    
    if( max_distance < distances[i] )
      max_distance = distances[i];
  }
  
  cout << K - max_distance << endl;
}

int main()
{
  //A();
  //B();
  //C();
  
  return 0;
}
