#include <iostream>
#include <vector>
using namespace std;

struct Cake {
    long int x;
    long int y;
    long int z;
};


// 0 < return : 交換する
// return < 0 : 交換しない
int for_qsort_x(const void *a, const void *b)
{
    Cake c = *(Cake *)a, d = *(Cake *)b;
    return (int)(c.x - d.x);
}

int for_qsort_y(const void *a, const void *b)
{
    Cake c = *(Cake *)a, d = *(Cake *)b;
    return (int)(c.y - d.y);
}

int for_qsort_x(const void *a, const void *b)
{
    Cake c = *(Cake *)a, d = *(Cake *)b;
    return (int)(c.z - d.z);
}


int main()
{
    int N, M;
    cin >> N >> M;

    vector<Cake> cake(N);
    for( int i = 0; i < N; ++i )
        cin >> cake[i].x >> cake[i].y >> cake[i].z;

    
    // xでソート
    qsort(cake, N, sizeof(Cake), for_qsort_x);
