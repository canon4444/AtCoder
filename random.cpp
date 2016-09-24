//迷ったらコレ☆
//入力は受け取らなくても大丈夫


#include <iostream>
#include <ctime>


using namespace std;


int main()
{
    srand(time(0));

    if( rand() & 1 ) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
