#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x = abs(x1 - x2),
        y = abs(y1 - y2);

    // A B     A
    //  □    D ◇ B
    // D C     C

    // A -> D
    if( x1 == x2 && y2 < y1 ) // 正方形
        cout << x2 + y << " " << y2 << " "
             << x1 + y << " " << y1 << endl;
    else if( x2 < x1 && y2 < y1 ) // ひし形
        cout << x2 + y << " " << y2 - x << " "
             << x1 + y << " " << y1 - x << endl;

    // D -> C
    else if( x1 < x2 && y1 == y2 ) // 正方形
        cout << x2 << " " << y2 + x << " "
             << x1 << " " << y1 + x << endl;
    else if( x1 < x2 && y2 < y1 ) // ひし形
        cout << x2 + y << " " << y2 + x << " "
             << x1 + y << " " << y1 + x << endl;

    // C -> B
    else if( x1 == x2 && y1 < y2 ) // 正方形
        cout << x2 - y << " " << y2 << " "
             << x1 - y << " " << y1 << endl;
    else if( x1 < x2 && y1 < y2 ) // ひし形
        cout << x2 - y << " " << y2 + x << " "
             << x1 - y << " " << y1 + x << endl;

    // B -> A
    else if( x2 < x1 && y1 == y2 ) // 正方形
        cout << x2 << " " << y2 - x << " "
             << x1 << " " << y1 - x << endl;
    else if( x2 < x1 && y1 < y2 ) // ひし形
        cout << x2 - y << " " << y2 - x << " "
             << x1 - y << " " << y1 - x << endl;

    return 0;
}
