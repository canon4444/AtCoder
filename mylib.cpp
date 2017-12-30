/**** qsort ****/
#include <iostream>
using namespace std;

//0 < return : 交換する
//return < 0 : 交換しない
int for_qsort(const void *a, const void *b)
{
    int c = *(int *)a, d = *(int *)b;
    return (int)(c - d);
}

int main()
{
    const int N = 10;
    int a[N];
    qsort(a, N, sizeof(int), for_qsort);
}
