#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string S, T;


    cin >> S >> T;


    if (equal(S.begin(), S.end(), "AtCoder") && equal(T.begin(), T.end(), "Land")) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

