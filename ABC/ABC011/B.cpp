#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


int main()
{
    string S;
    cin >> S;


    transform(S.begin(), S.begin()+1, S.begin(), ::toupper);
    transform(S.begin()+1, S.end(), S.begin()+1, ::tolower);
    

    cout << S << endl;


    return 0;
}
