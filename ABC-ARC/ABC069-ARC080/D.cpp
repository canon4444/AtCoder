#include <iostream>
#include <vector>
using namespace std;

struct Axis {
    int x;
    int y;
};


int main()
{
    int H, W, N;
    cin >> H >> W >> N;

    vector<int> a(N);
    for( int i = 0; i < N; ++i ) cin >> a[i];


    int ans[H][W] = { { 0 } };
    int h, w, n = 0;
    vector<Axis> axis;
    Axis tmp, place;

    tmp.x = 0, tmp.y = 0;
    axis.push_back(tmp);
    while( 1 ){
        place = axis.pop_back();
        ans[place.y][place.x] = a[p];
