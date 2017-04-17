#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
 
    int a = s.find("A");
    reverse(s.begin(), s.end());
    int b = s.find("Z");
 
    cout << s.length()-b - a << endl;
 
    return 0;
}
