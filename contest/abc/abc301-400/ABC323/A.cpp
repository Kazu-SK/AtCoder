
#include <iostream>

using namespace std;

int main()
{
    string S;

    cin >> S;


    bool ans_judge = true;

    for (int i = 1; i < S.size(); i += 2) {

        if (S[i] != '0') {
            ans_judge = false;
            break;
        }
    }

    if (ans_judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

