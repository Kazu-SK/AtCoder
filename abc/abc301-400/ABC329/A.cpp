
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string S;


    cin >> S;


    for (int i = 0; i < S.size(); i++) {
        cout << S[i];

        if (i != S.size() - 1) {
            cout << " ";
        }
    }

    return 0;
}

