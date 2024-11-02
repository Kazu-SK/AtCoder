#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    N += N + 1;


    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            cout << "0";
        else
            cout << "1";
    }

    return 0;
}

