#include <iostream>


using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;


    int red; //足して揃える
    int blue; //引いて揃える

    if( a < b ){
        red = b - a;
        blue = a + 10 - b;
    } else {
        red = 10 - a + b;
        blue = a - b;
    }


    if( red < blue ) cout << red << endl;
    else cout << blue << endl;
    

    return 0;
}
