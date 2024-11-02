#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string S;


    cin >> S;


    int left = 0;
    int right = 0;
    bool lr_judge = true;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '|') {
            if (lr_judge == true) {
                left = i;
                lr_judge = false;
            }
            else {
                right = i;
            }
        }
    }

    S.erase(left, right - left + 1);

    cout << S << endl;

    return 0;
}

