#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string S;


    cin >> S;

    bool R_judge = false;
    bool M_judge = false;

    for (int i = 1; i < S.size(); i++) {

        if (S[i - 1] == 'R')
            R_judge = true;

        if (S[i] == 'M')
            M_judge = true;
    }

    if (R_judge == true && M_judge == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

