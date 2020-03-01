#include <iostream>
using namespace std;


void A()
{
    int N;
    cin >> N;
    cout << (N+1) / 2;
}


void B()
{
    int A[3][3];
    int N;
    int b[100];
    
    for( int i = 0; i < 3; ++i )
        for( int j = 0; j < 3; ++j )
            cin >> A[i][j];
    
    cin >> N;
    
    for( int i = 0; i < N; ++i )
        cin >> b[i];
    
    
    for( int i = 0; i < N; ++i )
        for( int j = 0; j < 3; ++j )
            for( int k = 0; k < 3; ++k )
                if( A[j][k] == b[i] )
                    A[j][k] = -1;
    
    
    if( A[0][0]+A[1][1]+A[2][2] == -3 ||
        A[0][2]+A[1][1]+A[2][0] == -3 ){
        cout << "Yes" << endl;
        return;
    }
    
    for( int i = 0; i < 3; ++i )
        if( A[i][0]+A[i][1]+A[i][2] == -3 ||
            A[0][i]+A[1][i]+A[2][i] == -3 ){
            cout << "Yes" << endl;
            return;
        }
    
    cout << "No" << endl;
}


void C()
{
    int N;
    int M;
    int s[6];
    int c[6];
    
    cin >> N >> M;
    
    for( int i = 0; i < M; ++i )
        cin >> s[i] >> c[i];
    
    
    int ans[3] = { -1, -1, -1 };
    
    for( int i = 0; i < M; ++i ){
        // 同じ桁に違う数字を入れない
        if( ans[s[i]-1] != -1 && ans[s[i]-1] != c[i] ){
            cout << -1 << endl;
            return;
        }
    
        ans[s[i]-1] = c[i];
    }
    
    // 2桁以上の数字で、いちばん左の桁が0と指定された
    if( 1 < N && ans[0] == 0 ){
        cout << -1 << endl;
        return;
    }
    
    
    if( N == 1 ){
        if( ans[0] == -1 ) ans[0] = 0;
        cout << ans[0] << endl;
    } else if( N == 2 ){
        if( ans[0] == -1 ) ans[0] = 1;
        if( ans[1] == -1 ) ans[1] = 0;
        cout << ans[0]*10 + ans[1] << endl;
    } else if( N == 3 ){
        if( ans[0] == -1 ) ans[0] = 1;
        if( ans[1] == -1 ) ans[1] = 0;
        if( ans[2] == -1 ) ans[2] = 0;
        cout << ans[0]*100 + ans[1]*10 + ans[2] << endl;
    }
}


void D()
{
    int N;
    int M;
    int K;
    int A[100001], B[100001];
    int C[100001], D[100001];
    
    cin >> N >> M >> K;
    
    for( int i = 0; i < M; ++i )
        cin >> A[i] >> B[i];
    
    for( int i = 0; i < K; ++i )
        cin >> C[i] >> D[i];
    
    
}

int main()
{
    //A();
    //B();
    //C();
    D();
    
    return 0;
}
