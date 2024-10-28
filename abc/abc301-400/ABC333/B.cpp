
#include <iostream>

using namespace std;

int main()
{
    char P[5] = { 'A','B','C','D','E' };


    char S[2];
    char T[2];

    for (int i = 0; i < 2; i++) {
        cin >> S[i];
    }

    for (int i = 0; i < 2; i++) {
        cin >> T[i];
    }


    int diff_S = 0;
    int diff_T = 0;


    diff_S = abs(S[0] - S[1]);
    diff_T = abs(T[0] - T[1]);



    bool ans_judge = false;

    if ((diff_S == 2 || diff_S == 3) && (diff_T == 3 || diff_T == 2)) {
        ans_judge = true;
    }

    if ((diff_S == 1 || diff_S == 4) && (diff_T == 1 || diff_T == 4)) {
        ans_judge = true;
    }


    if (ans_judge == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}
