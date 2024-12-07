
#include <iostream>

using namespace std;

int main()
{
    string S;


    cin >> S;

    
    bool ans_judge = true;

    for (int i = 1; i < S.size(); i++) {

        if (S[i - 1] == 'B') {
            if (S[i] == 'A') {
                ans_judge = false;
                break;
            }
        }

        if (S[i - 1] == 'C') {
            if (S[i] == 'A' || S[i] == 'B') {
                ans_judge = false;
                break;
            }
        }

    }

    if (ans_judge == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

