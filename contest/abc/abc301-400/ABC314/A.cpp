﻿
#include <iostream>

using namespace std;

int main()
{
    string S = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";


    int N = 0;


    cin >> N;

    for (int i = 0; i < N + 2; i++) {
        cout << S[i];
    }

    return 0;
}

