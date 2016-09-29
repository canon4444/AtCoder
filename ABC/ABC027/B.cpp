#include <iostream>
#include <vector>


using namespace std;


int main()
{
    //入力
    int N;
    cin >> N;

    vector<int> a;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }


    int flag = 0, sum = 0, goal = 0, ans = 0;


    //そもそも，すべての島に同じ人数の住人が住んでいないか？
    flag = 0;
    for( int i = 0; i < N-1; ++i ){
        if( a[i] == a[i+1] ) ++flag;
    }
    if( flag == N-1 ){ //住んでいた
        cout << 0<< endl;
        return 0;
    }


    //そもそも，すべての島に同じ人数の住人が住めるか？
    sum = 0;
    for( int i = 0; i < N; ++i ){
        sum += a[i];
    }
    if( sum % N != 0 ){ //できない
        cout << -1 << endl;
        return 0;
    }


    //すべての島に同じ人数の住人が住めるらしい
    goal = sum / N; //各島の目標住人数
    for( int i = 0; i < N-1; ++i ){
        //左端の島から順に，負の住人数を許しながら，目標住人数にする
        if( a[i] != goal ){
            ++ans;
            int tmp = goal - a[i];
            a[i  ] += tmp;
            a[i+1] -= tmp;
        }
    }

    
    cout << ans << endl;


    return 0;
}
