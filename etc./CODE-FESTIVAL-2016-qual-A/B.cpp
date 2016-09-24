#include <iostream>
#include <vector>


using namespace std;


int main()
{
    int N;
    cin >> N;

    vector<int> a;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }


    int ans = 0;

    for( int i = 0; i < N; ++i ){
        int j = a[i] - 1;
        if( i == a[j] - 1 ){
            ++ans;
            a[j] = -1;
        }
    }


    cout << ans << endl;


    return 0;
}
