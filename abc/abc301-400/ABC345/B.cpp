#include <iostream>
#include <vector>

using namespace std;


int main()
{
    long long X;


    cin >> X;


    long long syo = X / 10;
    long long amari = X % 10;


    if (syo >= 0 && amari > 0) {
        syo++;
    }

    cout << syo << endl;

    return 0;
}

