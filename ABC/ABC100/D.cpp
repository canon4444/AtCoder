#include <iostream>
#include <vector>
using namespace std;

struct Cake {
    long int x;
    long int y;
    long int z;
};

int main()
{
    int N, M;
    cin >> N >> M;

    vector<Cake> cake(N);
    for( int i = 0; i < N; ++i )
        cin >> cake[i].x >> cake[i].y >> cake[i].z;

    
