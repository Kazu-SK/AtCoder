
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    //Bが5以下になる数値
    //ACが23以下になる数値


    int H = 0, W = 0;


    cin >> H >> W;

    int A, B, C, D;

    A = H / 10;
    B = H % 10;
    C = W / 10;
    D = W % 10;

    while (1) {

        if (D == 10) {
            D = 0;
            C++;

            if (C == 6) {
                C = 0;
                B++;

                if (B == 10) {
                    B = 0;
                    A++;
                }

                if (A == 2 && B == 4) {
                    A = 0;
                    B = 0;
                }
            }
        }

        if (A * 10 + C <= 23 && B <= 5) {
            cout << A *10 + B << " " << C * 10 + D << endl;
            break;
        }


        D++;
    }

    return 0;



}

