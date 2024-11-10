#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    int K = 0;


    cin >> N >> K;


    if (K >= N * 2 - 2 && K % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

