#include <iostream>
#include <cstdio>


using namespace std;


int main()
{
    int N;
    cin >> N;


    char ans[9];
    sprintf(ans, "%02d:%02d:%02d", N/3600, N/60-(N/3600)*60, N%60);
    cout << ans << endl;


    return 0;
}
