#include <stdio.h>

int main()
{
    int i;


    //入力
    int N, M;
    scanf("%d%d", &N, &M);

    int s[M+1], t[M+1];
    for( i = 1; i < M+1; ++i ){
        scanf("%d%d", &s[i], &t[i]);
    }


    //処理
    int r[N+2]; //各教室（＋番兵）（＋1オリジンにするため）
    for( i = 0; i < N+2; ++i ){ //いもす法のために初期化
        r[i] = 0;
    }
    for( i = 1; i < M+1; ++i ){ //いもす法
        r[s[i]] += 1;
        r[t[i]+1] -= 1;
    }
    for( i = 1; i < N+2; ++i ){ //累積和
        r[i] += r[i-1];
    }

    int x[N+1]; //1回だけ掃除される教室（＋1オリジンにするため）
    for( i = 0; i < N+1; ++i ){ //1回だけ掃除される教室をメモ
        if( r[i] == 1 ) x[i] = 1;
        else x[i] = 0;
    }
    for( i = 1; i < N+1; ++i ){ //累積和
        x[i] += x[i-1];
    }

    int k = 0, ans[M];
    for( i = 1; i < M+1; ++i ){ //各入力が2回以上掃除される教室か1回だけ掃除される教室の累積和から判定
        if( x[t[i]] - x[s[i]-1] == 0 ){
            ans[k++] = i;
        }
    }


    //出力
    printf("%d\n", k);
    for( i = 0; i < k; ++i ){
        printf("%d\n", ans[i]);
    }


    return 0;
}
