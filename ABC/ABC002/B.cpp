#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char W[31];
	cin >> W;

	for (int i = 0; i < (int)strlen(W); ++i) {
		switch (W[i]) {
		case 'a': case 'i': case 'u': case 'e': case 'o': break;
		default: cout << W[i]; break;
		}
	}

	cout << endl;

	return 0;
}
