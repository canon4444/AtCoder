#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int N;
    cin >> N;


    unsigned long long int h, n, w;
    bool flag = true;
    for( h = 1; h <= 3500 && flag; ++h ){
        for( n = 1; n <= 3500 && flag; ++n ){
            if( 4*h*n-N*n-N*h == 0 ) continue;
            w = floor((N*h*n) / (4*h*n-N*n-N*h));
            unsigned long long int leftI = 4 * h * n * w;
            unsigned long long int rightI = N * ( n*w + h*w + h*n );
            double leftD = 4.0/N;
            double rightD = 1.0/h+1.0/n+1.0/w;
            if( leftI == rightI && leftD == rightD ){
                flag = false;
                --h, --n, --w;
            }
            ++w;
            leftI = 4 * h * n * w;
            rightI = N * ( n*w + h*w + h*n );
            leftD = 4.0/N;
            rightD = 1.0/h+1.0/n+1.0/w;
            if( leftI == rightI && leftD == rightD ){
                flag = false;
                --h, --n, --w;
            }
        }
    }


    cout << h << " " << n << " " << w << endl;
    //cout << 4*h*n*w << " == " << N*(n*w+h*w+h*n) << endl;
    //cout << 4.0/N << " == " << 1.0/h+1.0/n+1.0/w << endl;

    return 0;
}
