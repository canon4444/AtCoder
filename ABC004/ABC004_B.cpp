#include <iostream>


using namespace std;


int main()
{
    char c[4][4];
    for( int i = 0; i < 4; ++i ){
        for( int j = 0; j < 4; ++j ){
            cin >> c[i][j];
        }
    }
    
    
    for( int i = 3; -1 < i; --i ){
        for( int j = 3; -1 < j; --j ){
            cout << c[i][j];
            if( j != 0 ) cout << " ";
        }
        cout << endl;
    }
    
    
	return 0;
}
