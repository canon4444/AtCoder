#include <iostream>
#include <vector>
using namespace std;

void A()
{
  int K, A, B;
  cin >> K >> A >> B;
  
  for( int i = A/K; i < B/K+1; ++i ){
  	if( A <= K*i && K*i <= B ){
      cout << "OK" << endl;
      return;
    }
  }

  cout << "NG" << endl;
}

void B()
{
  long long int X;
  cin >> X;
  
  long long int base = 100;
  long long int ans = 0;
  while( true ){
    ++ans;
    base = base * 1.01;
    
    if( X <= base ){
      cout << ans << endl;
      return;
    }
  } 
}

void C()
{
  int N, M, Q;
  cin >> N >> M >> Q;
  
  vector<int> a(Q), b(Q), c(Q), d(Q);
  for( int i = 0; i < Q; ++i )
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  
  vector<int> tmp(10);
  long long int zns = 0, ans = 0;    
  for( int i0 = 1; i0 <= M; ++i0 )
    for( int i1 = i0; i1 <= M; ++i1 )
      for( int i2 = i1; i2 <= M; ++i2 )
        for( int i3 = i2; i3 <= M; ++i3 )
          for( int i4 = i3; i4 <= M; ++i4 )
            for( int i5 = i4; i5 <= M; ++i5 )
              for( int i6 = i5; i6 <= M; ++i6 )
                for( int i7 = i6; i7 <= M; ++i7 )
                  for( int i8 = i7; i8 <= M; ++i8 )
                    for( int i9 = i8; i9 <= M; ++i9 ){
                      tmp[0] = i0; tmp[1] = i1; tmp[2] = i2; tmp[3] = i3; tmp[4] = i4;
                      tmp[5] = i5; tmp[6] = i6; tmp[7] = i7; tmp[8] = i8; tmp[9] = i9;
                      for( int i = 0; i < Q; ++i )
	                    if( tmp[b[i]-1] - tmp[a[i]-1] == c[i] ) zns += d[i];
                      if( ans < zns ) ans = zns;
                      zns = 0;
                    }
  
  cout << ans << endl;
}

int main()
{
  //A();
  //B();
  //C();
  
  return 0;
}
