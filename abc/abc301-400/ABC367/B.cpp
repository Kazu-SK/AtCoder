#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    string S;
    string copy_S;


    cin >> S;

    copy_S = S;

    for (int i = S.size() - 1; i >= 0; i--) {
        if (S[i] == '.') {
            //if (copy_S.size() == i + 1) {
            copy_S.pop_back();
            break;
            //}
        }

        if (S[i] - '0' >= 1) {
            break;
        }
        else {
            copy_S.pop_back();
        }

    }

    cout << copy_S << endl;

    return 0;
}

