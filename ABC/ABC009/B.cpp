#include <iostream>
#include <set>


using namespace std;


int main()
{
    int N;
    cin >> N;

    set<int> A;
    for( int i = 0; i < N; ++i ){
        int tmp;
        cin >> tmp;
        A.insert(tmp);
    }


    cout << *(----A.end()) << endl;


    return 0;
}
