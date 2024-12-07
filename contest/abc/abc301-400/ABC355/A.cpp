#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int A = 0, B = 0;
    bool human[4] = { true , true, true ,true };

    cin >> A >> B;

    human[A] = false;
    human[B] = false;

    vector<int> culprit;

    for (int i = 1; i <= 3; i++) {
        if (human[i] == true) {
            culprit.push_back(i);
        }
    }


    if (culprit.size() >= 2) {
        cout << -1 << endl;
    }
    else {
        cout << culprit[0] << endl;
    }

    return 0;
}
