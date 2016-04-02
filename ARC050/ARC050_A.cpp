#include <iostream>
using namespace std;


int main()
{
	int C, c;
	cin >> C >> c;

	if( C == c-'a'+'A' ) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
