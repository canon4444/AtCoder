#include <stdio.h>

int main()
{
    int i;

    //入力
    int N, L;
    scanf("%d%d", &N, &L);
    char S[N];
    scanf("%s", S);

    //処理
    int tab = 1, ans = 0;
    for( i = 0; i < N; ++i ){
        if( S[i] == '+' ) ++tab; //タブを開く
        else --tab; //タブを閉じる
        if( L < tab ) tab = 1, ++ans; //クラッシュ
    }

    //出力
    printf("%d\n", ans);

    return 0;
}
