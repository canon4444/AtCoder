#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main()
{
    string S;
    int N;

    cin >> S >> N;


    vector<string> name;
    for( int i = 0; i < 5; ++i ){
        for( int j = 0; j < 5; ++j ){
            string tmp = S.substr(i, 1) + S.substr(j, 1);
            name.push_back(tmp);
        }
    }


    cout << name[N-1] << endl;


    return 0;
}
