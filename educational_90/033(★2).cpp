#include <iostream>

using namespace std;

int main()
{
    int H = 0, W = 0;


    cin >> H >> W;


    int tmp[2] = { 0 };


    if (H == 1 || W == 1) {
        tmp[0] = H;
        tmp[1] = W;
    }
    else {
        tmp[0] = H / 2 + H % 2;
        tmp[1] = W / 2 + W % 2;
    }

    cout << tmp[0] * tmp[1] << endl;

    return 0;
}

