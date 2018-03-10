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
    vector<Action> ans[10];
    long long int money = 100;
    long long int manpower = 100;

    //// 生成
    for( int i = 0; i < 10; ++i ){
        for( int j = 0; j < M; ++j ){
            Action a;
            a.c = (Command)(rand() % NUM_COMMAND);

            switch( a.c ){
            case road:
                if( rand() % 2 ){ // X1 == X2
                    a.X1 = a.X2 = rand()%50 + 1;
                    a.Y2 = rand()%50 + 1;
                    a.Y1 = rand()%a.Y2 + 1;
                } else {
                    a.X2 = rand()%50 + 1;
                    a.X1 = rand()%a.X2 + 1;
                    a.Y1 = a.Y2 = rand()%50 + 1;
                }
                break;

            case plant:
                a.X1 = rand()%50 + 1;
                a.Y1 = rand()%50 + 1;
                break;

            case harvest:
                a.X2 = rand()%50 + 1;
                a.Y2 = rand()%50 + 1;
                a.X1 = rand()%a.X2 + 1;
                a.Y1 = rand()%a.Y2 + 1;
                break;

            case destroy:
                a.X2 = rand()%50 + 1;
                a.Y2 = rand()%50 + 1;
                a.X1 = rand()%a.X2 + 1;
                a.Y1 = rand()%a.Y2 + 1;
                break;

            case growup:
                a.A = rand()%(int)pow(money, 0.5) + 1;
                //manpower += a.A;
                break;

            case warpgate:
                a.X1 = rand()%50 + 1;
                a.Y1 = rand()%50 + 1;
                break;

            case work:
                //money += 1;
                break;

            default: break;
            }
            ans[i].push_back(a);
        }
    }


    int cnt = 0;
    while( cnt++ < 1000 ){
        //// 評価
        long long int tsukamo[10] = { 0 };


        //// 交差
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

        default: break;
        }
    }


    return 0;
}
