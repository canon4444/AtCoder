#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
void A()
{
    string N;
    cin >> N;
    
    if( N.find("7") != string::npos )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
 
void B()
{
    int N;
    cin >> N;
    
    long long int ans = 0;
    
    for( int i = 1; i < N+1; ++i )
        if( (i % 3 != 0) && (i % 5 != 0) )
            ans += i;
    
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
    int K;
    cin >> K;
    
    int ans = 0;
    
    for( int a = 1; a < K+1; ++a )
        for( int b = 1; b < K+1; ++b )
            for( int c = 1; c < K+1; ++c )
                ans += gcd(gcd(a, b), c);
    
    cout << ans << endl;
}
 
void D()
{
    // 入力
    int N;
    string S;
    cin >> N >> S;
    
    // SをR, G, Bに分割する
    vector<int> R, G, B;
    for( int i = 0; i < N; ++i )
        switch( S[i] ){
            case 'R': R.push_back(i+1); break;
            case 'G': G.push_back(i+1); break;
            case 'B': B.push_back(i+1); break;
        }
    
    long long int ans = 0;
    int lenR = (int)R.size(),
        lenG = (int)G.size(),
        lenB = (int)B.size();
 
    // Si != Sj && Sj != Sk && Sk != Si
    // j - i != k - j
    // 1 <= i < j < k <= N
    /*
    for( int i = 0; i < N; ++i ){
        if( S[i] == 'R' ){
            // R[i], G[j], B[k]
            for( int j = 0; j < lenG; ++j ){
                if( G[j] < R[i] ) continue;
                for( int k = 0; k < lenB; ++k ){
                    if( B[k] < G[j] ) continue;
                    if( G[j]-R[i] == B[k]-G[j] ) continue;
                    ++ans;
                    cout << "R[i], G[j], B[k]" << endl;
                }
            }
            // R[i], B[j], G[k]
            for( int j = 0; j < lenB; ++j ){
                if( B[j] < R[i] ) continue;
                for( int k = 0; k < lenG; ++k ){
                    if( G[k] < B[j] ) continue;
                    if( B[j]-R[i] == G[k]-B[j] ) continue;
                    ++ans;
                    cout << "R[i], B[j], G[k]" << endl;
                }
            }
        } else if( S[i] == 'G' ){
            // G[i], R[j], B[k]
            for( int j = 0; j < lenR; ++j ){
                if( R[j] < G[i] ) continue;
                for( int k = 0; k < lenB; ++k ){
                    if( B[k] < R[j] ) continue;
                    if( R[j]-G[i] == B[k]-R[j] ) continue;
                    ++ans;
                    cout << "G[i], R[j], B[k]" << endl;
                }
            }
            // G[i], B[j], R[k]
            for( int j = 0; j < lenB; ++j ){
                if( B[j] < G[i] ) continue;
                for( int k = 0; k < lenR; ++k ){
                    if( R[k] < B[j] ) continue;
                    if( B[j]-G[i] == R[k]-B[j] ) continue;
                    ++ans;
                    cout << "G[i], B[j], R[k]" << endl;
                }
            }
        } else if( S[i] == 'B' ){
            // B[i], R[j], G[k]
            for( int j = 0; j < lenR; ++j ){
                if( R[j] < B[i] ) continue;
                for( int k = 0; k < lenG; ++k ){
                    if( G[k] < R[j] ) continue;
                    if( R[j]-B[i] == G[k]-R[j] ) continue;
                    ++ans;
                    cout << "B[i], R[j], G[k]" << endl;
                }
            }
            // B[i], G[j], R[k]
            for( int j = 0; j < lenG; ++j ){
                if( G[j] < B[i] ) continue;
                for( int k = 0; k < lenR; ++k ){
                    if( R[k] < G[j] ) continue;
                    if( G[j]-B[i] == R[k]-G[j] ) continue;
                    ++ans;
                    cout << "B[i], G[j], R[k]" << endl;
                }
            }
        }
    }
    */
    for( int i = 0; i < lenR; ++i ){
        // R[i], G[j], B[k]
        for( int j = 0; j < lenG; ++j ){
            if( G[j] < R[i] ) continue;
            for( int k = 0; k < lenB; ++k ){
                if( B[k] < G[j] ) continue;
                if( G[j]-R[i] == B[k]-G[j] ) continue;
                ++ans;
            }
        }
        // R[i], B[j], G[k]
        for( int j = 0; j < lenB; ++j ){
            if( B[j] < R[i] ) continue;
            for( int k = 0; k < lenG; ++k ){
                if( G[k] < B[j] ) continue;
                if( B[j]-R[i] == G[k]-B[j] ) continue;
                ++ans;
            }
        }
    }
    for( int i = 0; i < lenG; ++i ){
        // G[i], R[j], B[k]
        for( int j = 0; j < lenR; ++j ){
            if( R[j] < G[i] ) continue;
            for( int k = 0; k < lenB; ++k ){
                if( B[k] < R[j] ) continue;
                if( R[j]-G[i] == B[k]-R[j] ) continue;
                ++ans;
            }
        }
        // G[i], B[j], R[k]
        

    // B[i], R[j], G[k]
    // B[i], G[j], R[k]
    
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
