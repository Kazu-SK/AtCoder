#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string T, S;
    int ans_count = 0;

    cin >> S >> T;


    transform(S.begin(), S.end(), S.begin(), ::toupper);


    int j = 0;

    for (int i = 0; i < T.size(); i++) {

        if (i == T.size() - 1 && T[i] == 'X') {
            ans_count++;
            break;
        }

        while (j < S.size()) {
            if (T[i] == S[j]) {
                ans_count++;
                j++;
                break;
            }

            j++;
        }

    }


    if (ans_count == 3) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

