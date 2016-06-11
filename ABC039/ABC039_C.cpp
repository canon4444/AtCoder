#include <iostream>
#include <string>

using namespace std;


int main() {
	string S;
	cin >> S;
	
	char piano[13] = "WBWBWWBWBWBW";
	char type[12][21];
	for( int i = 0; i < 12; ++i ){
		for( int j = 0, k = i; j < 20; ++j, k=(k+1)%12 ){
			type[i][j] = piano[k];
		}
		type[i][20] = '\0';
	}
	
	int ans_val = 0;
	for( int i = 0; i < 12; ++i ){
		int flag = 1;
		for( int j = 0; j < 20; ++j ){
			if( S[j] != type[i][j] ){
				flag = 0;
				break;
			}
		}
		if( flag ){
			ans_val = i;
			break;
		}
	}
	
	string ans_str;
	switch( ans_val ){
		case 0: ans_str = "Do"; break;
		case 2: ans_str = "Re"; break;
		case 4: ans_str = "Mi"; break;
		case 5: ans_str = "Fa"; break;
		case 7: ans_str = "So"; break;
		case 9: ans_str = "La"; break;
		case 11: ans_str = "Si"; break;
		default: ans_str = "default"; break;
	}
	
	cout << ans_str << endl;
	
	return 0;
}
