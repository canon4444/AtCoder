#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


struct Axis {
    int r, c;
    int rr, cc;
};


void set_odr(int *odr)
{
    int idx;
    string num = "012345678";

    for( int i = 0; i < 9; ++i ){
        idx = rand() % num.length();
        odr[i] = num[idx] - '0';
        num.erase(num.begin()+idx);
    }
}


Axis search_axis(Axis src, int *odr, int H, int W, int *table)
{
    Axis dst = src;
    int y = dst.rr, x = dst.cc;

    if( y == 0 && x == 0 ){
        for( int i = 0; i < 9; ++i ){

        }

    } else if( y == 0   && x == W-1 ){
        --x;
    } else if( y == H-1 && x == 0 ){
        --y;
    } else if( y == H-1 && x == W-1 ){
        --y;
    } else {
        --y;
    }
    
    return dst;
}


int main()
{
    int H, W, D, K;
    cin >> H >> W >> D >> K;

    vector<Axis> rc(D);
    int table[200][200] = { { 0 } };
    for( int i = 0; i < D; ++i ){
        cin >> rc[i].r >> rc[i].c;
        table[rc[i].r][rc[i].c] = i;
    }


    vector<Axis> ans;
    Axis tmp;
    int y, x, odr[9] = { 0 };
    for( int i = 1; i < D; ++i ){
        tmp.r = tmp.rr = y = rc[i-1].r;
        tmp.c = tmp.cc = x = rc[i-1].c;
        set_odr(odr);

        tmp = search_axis(tmp, odr, H, W, table);

        if( tmp.r != tmp.rr || tmp.c != tmp.cc ) ans.push_back(tmp);
        if( K == (int)ans.size() ) break;
    }

    return 0;
}
