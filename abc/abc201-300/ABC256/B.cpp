
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    int P = 0;


    cin >> N;

    vector<int> A(N);
    vector<bool> masu(4, false);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < N; i++) {
        masu[0] = true;

        for (int j = 0; j < A[i]; j++) {

            /*
            for (int z = 0; z < masu.size(); z++) {
                if (masu[z])cout << "@";
                else cout << "-";
            }
            cout << endl;
            */

            if (masu[3] == true) {
                P++;
            }

            masu.pop_back();
            masu.insert(masu.begin(), false);

        }
        //cout << endl;
    }


    cout << P << endl;

    return 0;
}

