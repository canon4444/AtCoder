#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x[100] = { 0 }, y[100] = { 0 }, h[100] = { 0 };
    for( int i = 0; i < N; ++i )
        cin >> x[i] >> y[i] >> h[i];

    int CX, CY;
    int tmp, tmp_h = -1, min_h = INT_MAX;
    bool flag = true;

    // 0 <= CX, CY <= 100 なので全探索
    for( CX = 0; CX <= 100; ++CX ){
        for( CY = 0; CY <= 100; ++CY ){
            for( int i = 0; i < N; ++i ){
                // max(hoge, 0) の出せる部分を出す
                tmp = abs(x[i]-CX) + abs(y[i]-CY);

                if( h[i] == 0 ){ // h[i] が 0 ならば，取り得る H の最小値が分かる（H はいくらでも大きくていいので）
                    min_h = tmp <  min_h ? tmp : min_h;
                } else { // h[i] が 0 以外ならば，h[i] = max(H-tmp) なので，H = h[i] + tmp
                    if( tmp_h == -1 ) tmp_h = h[i] + tmp;
                    else if( tmp_h != h[i]+tmp ){ flag = false; break; } // 他の i と H が一致しなかった，つまり CX, CY が誤り
                }
            }

            if( flag ){ // min_h および tmp_h が揃った
                if( min_h != INT_MAX && tmp_h != -1 ){
                    if( tmp_h <= min_h ){
                        cout << CX << " " << CY << " ";
                        cout << tmp_h << endl;
                        return 0;
                    }
                } else if( min_h == INT_MAX ){
                    if( tmp_h != -1 ){                    
                        cout << CX << " " << CY << " ";
                        cout << tmp_h << endl;
                        return 0;
                    }
                } else if( tmp_h == -1 ){
                    if( min_h != INT_MAX ){
                        cout << CX << " " << CY << " ";
                        cout << min_h << endl;
                        return 0;
                    }
                }
            }

            // tmp_h が揃わなかった
            tmp_h = -1;
            min_h = INT_MAX;
            flag = true;
        }
    }

    return 0;
}
