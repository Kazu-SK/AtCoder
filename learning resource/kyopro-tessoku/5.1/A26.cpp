
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int Q = 0;


    cin >> Q;

    vector<int> X(Q, 0);


    for (int i = 0; i < Q; i++)
        cin >> X[i];



    for (int i = 0; i < Q; i++) {

        bool answer = true;

        for (int j = 2; j * j <= X[i]; j++) {
            if (X[i] % j == 0) {
                answer = false;
                break;
            }
        }

        if (answer == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }


    return 0;
}

