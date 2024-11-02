
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string S;

    string A[7] = { "ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};


    cin >> S;

    bool ans_judge = false;

    for (int i = 0; i < 7; i++) {
        
        if (S == A[i]) {
            ans_judge = true;
            break;
        }
    }

    if (ans_judge == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

