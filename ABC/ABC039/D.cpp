//サンプルは通る

#include <iostream>
using namespace std;


int H, W;
char pic[100][100], pic_data[100][100];


bool isBlack(int i, int j)
{
	if( pic[i][j] == '#' ) return true;
	return false;
}


bool isBlack_d(int i, int j)
{
	if( pic_data[i][j] == '#' ) return true;
	return false;
}


bool isGray(int i, int j)
{
	if( pic_data[i][j] == '*' ) return true;
	return false;
}


bool isIn(int i, int j)
{
	if( i <  0 ) return false;
	if( i >= H ) return false;
	if( j <  0 ) return false;
	if( j >= W ) return false;
	return true;
}


bool check8(int i, int j)
{
	int flag = 0, num = 0;
	
	if( isIn(i-1, j-1) ){ ++num; if( isBlack(i-1, j-1) ) ++flag; }
	if( isIn(i-1, j  ) ){ ++num; if( isBlack(i-1, j  ) ) ++flag; }
	if( isIn(i-1, j+1) ){ ++num; if( isBlack(i-1, j+1) ) ++flag; }
	if( isIn(i  , j-1) ){ ++num; if( isBlack(i  , j-1) ) ++flag; }
	if( isIn(i  , j+1) ){ ++num; if( isBlack(i  , j+1) ) ++flag; }
	if( isIn(i+1, j-1) ){ ++num; if( isBlack(i+1, j-1) ) ++flag; }
	if( isIn(i+1, j  ) ){ ++num; if( isBlack(i+1, j  ) ) ++flag; }
	if( isIn(i+1, j+1) ){ ++num; if( isBlack(i+1, j+1) ) ++flag; }
	
	if( num != 0 && flag == num ) return true;
	return false;
}


bool check8_d(int i, int j)
{
	if( isIn(i-1, j-1) && isBlack_d(i-1, j-1) ) return true;
	if( isIn(i-1, j  ) && isBlack_d(i-1, j  ) ) return true;
	if( isIn(i-1, j+1) && isBlack_d(i-1, j+1) ) return true;
	if( isIn(i  , j-1) && isBlack_d(i  , j-1) ) return true;
	if( isIn(i  , j+1) && isBlack_d(i  , j+1) ) return true;
	if( isIn(i+1, j-1) && isBlack_d(i+1, j-1) ) return true;
	if( isIn(i+1, j  ) && isBlack_d(i+1, j  ) ) return true;
	if( isIn(i+1, j+1) && isBlack_d(i+1, j+1) ) return true;
	
	return false;
}


void toWhite(int i, int j)
{
	if( isIn(i-1, j-1) ) pic_data[i-1][j-1] = '.';
	if( isIn(i-1, j  ) ) pic_data[i-1][j  ] = '.';
	if( isIn(i-1, j+1) ) pic_data[i-1][j+1] = '.';
	if( isIn(i  , j-1) ) pic_data[i  ][j-1] = '.';
	if( isIn(i  , j+1) ) pic_data[i  ][j+1] = '.';
	if( isIn(i+1, j-1) ) pic_data[i+1][j-1] = '.';
	if( isIn(i+1, j  ) ) pic_data[i+1][j  ] = '.';
	if( isIn(i+1, j+1) ) pic_data[i+1][j+1] = '.';
}



int main()
{
	cin >> H >> W;
	for( int i = 0; i < H; ++i ){
		for( int j = 0; j < W; ++j ){
			cin >> pic[i][j];
			pic_data[i][j] = pic[i][j];
		}
	}
	
	for( int i = 0; i < H; ++i ){
		for( int j = 0; j < W; ++j ){
			if( isBlack(i, j) && isBlack_d(i, j) ){
				if( !check8(i, j) ) pic_data[i][j] = '*';
				else toWhite(i, j);
			}
		}
	}
	
	bool ans = true;
	for( int i = 0; i < H && ans; ++i ){
		for( int j = 0; j < W && ans; ++j ){
			if( isGray(i, j) && !check8_d(i, j) ) ans = false;
		}
	}
	
	if( ans ){
		cout << "possible" << endl;
		
		for( int i = 0; i < H; ++i ){
			for( int j = 0; j < W; ++j ){
				if( isGray(i, j) ) cout << '.';
				else cout << pic_data[i][j];
			}
			cout << endl;
		}
	} else {
		cout << "impossible" << endl;
		/*
		for( int i = 0; i < H; ++i ){
			for( int j = 0; j < W; ++j ){
				cout << pic_data[i][j];
			}
			cout << endl;
		}
		*/
	}
	
	
	return 0;
}
