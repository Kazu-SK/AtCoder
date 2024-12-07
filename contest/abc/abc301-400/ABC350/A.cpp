#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char S[6];



    for (int i = 0; i < sizeof(S); i++) {
        cin >> S[i];
    }

    int num = 0;
    int multi = 100;

    for (int i = 3; i < sizeof(S); i++) {

        num += (S[i] - '0') * multi;
        multi /= 10;
    }

    if (num >= 1 && num <= 349) {

        if (num == 316) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

