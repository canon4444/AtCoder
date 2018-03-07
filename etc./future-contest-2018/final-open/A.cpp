#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


enum Command { road, plant, harvest, destroy, growup, warpgate, work, NUM_COMMAND };


struct Action {
    Command c;
    int X1, Y1;
    int X2, Y2;
    int A;
};


string get_command_name(Command c)
{
    switch( c ){
    case     road: return "road";
    case    plant: return "plant";
    case  harvest: return "harvest";
    case  destroy: return "destroy";
    case   growup: return "growup";
    case warpgate: return "warpgate";
    case     work: return "work";
    default: return "work";
    }

    return "work";
}


int get_XY()
{
    return ((int)rand() % 50) + 1;
}


int get_A(int money)
{
    return ((int)rand() % (int)pow(money, 0.5)) + 1;
}


int main()
{
    // 入力
    int N = 50;

    int A[50][50] = { { 0 } };
    for( int i = 0; i < N; ++i )
        for( int j = 0; j < N; ++j )
            cin >> A[i][j];


    // 処理
    srand(time(0));

    int M = 1000;
    vector<Action> ans(1000);
    long long int money = 100;
    long long int manpower = 100;

    for( int i = 0; i < M; ++i ){
        ans[i].c = (Command)(rand() % NUM_COMMAND);

        switch( ans[i].c ){
        case road:
            if( rand() % 2 ){ // X1 == X2
                ans[i].X1 = ans[i].X2 = get_XY();
                ans[i].Y1 = get_XY();
                ans[i].Y2 = get_XY();
            } else {
                ans[i].X1 = get_XY();
                ans[i].X2 = get_XY();
                ans[i].Y1 = ans[i].Y2 = get_XY();
            }
            break;

        case plant:
            ans[i].X1 = get_XY();
            ans[i].Y1 = get_XY();
            break;

        case harvest:
            ans[i].X1 = get_XY();
            ans[i].Y1 = get_XY();
            ans[i].X2 = get_XY();
            ans[i].Y2 = get_XY();
            break;

        case destroy:
            ans[i].X1 = get_XY();
            ans[i].Y1 = get_XY();
            ans[i].X2 = get_XY();
            ans[i].Y2 = get_XY();
            break;

        case growup:
            ans[i].A = get_A(money);
            break;

        case warpgate:
            ans[i].X1 = get_XY();
            ans[i].Y1 = get_XY();
            break;

        case work:
            money += 1;
            break;
        }
    }


    // 出力
    for( int i = 0; i < M; ++i ){
        switch( ans[i].c ){
        case road:
            cout << "road " << ans[i].X1 << " " << ans[i].Y1 << " " << ans[i].X2 << " " << ans[i].Y2 << endl;
            break;

        case plant:
            cout << "plant " << ans[i].X1 << " " << ans[i].Y1 << endl;
            break;

        case harvest:
            cout << "harvest " << ans[i].X1 << " " << ans[i].Y1 << " " << ans[i].X2 << " " << ans[i].Y2 << endl;
            break;

        case destroy:
            cout << "destroy " << ans[i].X1 << " " << ans[i].Y1 << " " << ans[i].X2 << " " << ans[i].Y2 << endl;
            break;

        case growup:
            cout << "growup " << ans[i].A << endl;
            break;

        case warpgate:
            cout << "warpgate " << ans[i].X1 << " " << ans[i].Y1 << endl;
            break;

        case work:
            cout << "work" << endl;
            break;
        }
    }


    return 0;
}
