
#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

int main()
{

    int S[8];


    for (int i = 0; i < 7; i++) {
        cin >> S[i];
    }


    for (int i = 0; i < 7; i++) {
        bool judge[3] = { false };

        if (i >= 1 && S[i - 1] <= S[i]) {
            judge[0] = true;
        }
        else if (i == 0) {
            judge[0] = true;
        }
        else {
        }

        if (S[i] >= 100 && S[i] <= 675)
            judge[1] = true;

        if (S[i] % 25 == 0)
            judge[2] = true;

        if (judge[0] == false || judge[1] == false || judge[2] == false){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

