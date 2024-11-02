#include <iostream>
#include <vector>


using namespace std;

int main()
{
    string S;

    cin >> S;




    for (int i = 0; i < S.size(); i++) {
        if (i == 0 && S[i] != '<') {
            cout << "No" << endl;
            return 0;
        }

        if ((i > 0 && i < S.size() - 1) && S[i] != '=') {
            cout << "No" << endl;
            return 0;
        }

        if (i == S.size() - 1 && S[i] != '>') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

