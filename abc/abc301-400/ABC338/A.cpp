
#include <iostream>

using namespace std;

int main()
{
    string S;


    cin >> S;


    bool ans_judge = true;

    for (int i = 0; i < S.size(); i++) {

        if (i == 0) {

            if (S[i] - 'A' < 0 || S[i] - 'A' > 25) {
                ans_judge = false;
            }
        }
        else {

            if (S[i] - 'a' < 0 || S[i] - 'a' > 25) {
                ans_judge = false;
            }
        }
    }

    if (ans_judge == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

