#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    long long int ans = 0;
    int a, b;
    for( int i = 0; i < N; ++i ){
        cin >> a >> b;
        ans += a*b;
    }

    cout << (int)(ans*1.05) << endl;

    return 0;
}
