
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    string S;


    cin >> S;


    int R_pos[2] = { 0 };
    int R_itr = 0;
    int K_pos = 0;
    int B_num[2] = { 0 };
    int B_itr = 0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'B') {
            B_num[B_itr] = (i + 1) % 2;
            B_itr++;
            continue;
        }

        if (S[i] == 'R') {
            R_pos[R_itr] = i + 1;
            R_itr++;
            continue;
        }

        if (S[i] == 'K') {
            K_pos = i + 1;
        }
    }

    bool judge[2] = { false };

    if (R_pos[0] < K_pos && K_pos < R_pos[1]) {
        judge[0] = true;
    }

    if ((B_num[0] == 1 && B_num[1] == 0) || (B_num[0] == 0 && B_num[1] == 1)) {

        judge[1] = true;
    }

    if (judge[0] == true && judge[1] == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

