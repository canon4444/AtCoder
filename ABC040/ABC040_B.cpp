#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int n;
	cin >> n;
	
	int begin = 1;
	for( int begin = 1; begin < n; ++begin ){
		if( n < pow(begin, 2) ){
			begin -= 3;
			break;
		}
	}
	
	int h = begin, w = begin, r = n-h*w;
	int ans = r;
	for( int i = begin; i < n; ++i ){
		for( int j = begin; j < n; ++j ){
			if( i*j <= n ){
				int tmp = (int)fabs(i-j) + (n-i*j);
				if( tmp < ans ) ans = tmp;
			} else break;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
