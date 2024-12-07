
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<string> S(N);
    vector<string> T(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];
    }

    for (int i = 0; i < N; i++) {

        //bool judge[2] = { true }; 先頭しかtrueになりません。
        bool judge[2] = { false };

        for (int j = 0; j < 2; j++) {

            string search;

            if (j == 0) {
			    search = S[i];
            }
            else {
			    search = T[i];
            }

            judge[j] = true;

			for (int s = 0; s < N; s++) {

				if (s == i)continue;

				if (search == S[s]) {
					judge[j] = false;
				}
			}

			for (int t = 0; t < N; t++) {
				if (t == i)continue;

				if (search == T[t]) {
					judge[j] = false;
				}
			}
        }


		if (judge[0] == false && judge[1] == false) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

