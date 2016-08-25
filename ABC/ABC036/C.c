//部分点

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val, index;
} B;

//0 < return : 交換する
//return < 0 : 交換しない
int func(const void *a, const void *b)
{
    B c = *(B *)a, d = *(B *)b;
    return c.val - d.val;
}

int main()
{
    int i, j;

    //入力
    int N;
    scanf("%d", &N);
    int a[N];
    B b[N];
    for( i = 0; i < N; ++i ){
        scanf("%d", &a[i]);
        b[i].val = a[i];
    }

    //処理
    ////圧縮用の値を求める
    qsort(b, N, sizeof(B), func);
    b[0].index = 0;
    for( i = 1, j = 0; i < N; ++i ){
        while( b[i].val == b[j].val ){
            b[i].index = b[j].index; //ai = aj
            ++i;
        }
        b[i].index = b[i-1].index + 1;
        j = i;
    }

    //出力
    j = 0;
    for( i = 0; i < N; ++i ){
        for( j = 0; j < N; ++j ){
            //if( j != 0 && c[j].val == c[j-1].val ) continue;
            if( a[i] == b[j].val ){
                printf("%d\n", b[j].index);
                break;
            }
        }
    }

    return 0;
}
