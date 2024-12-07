
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using LL = long long;

int main()
{

    int N = 0, M = 0;
    int k = 0;
    vector<int> x;


    cin >> N >> M;

    vector<vector<bool>> Join(N + 1, vector<bool>(N + 1, false));

    for (int i = 0; i < M; i++) {
        cin >> k;

        for (int j = 0; j < k; j++) {
            int x_num;

            cin >> x_num;
            x.push_back(x_num);
        }


        for (int a = 0; a < x.size(); a++) {
            for (int b = a + 1; b < x.size(); b++) {
                //cout << "a = " << a << endl;
                //cout << "b = " << b << endl;
                //cout << "x[a] = " << x[a] << endl;
                //cout << "x[b] = " << x[b] << endl;
                Join[x[a]][x[b]] = true;
                Join[x[b]][x[a]] = true;
            }
        }

        x.clear();
    }

    bool judge = true;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i != j) {
                if (Join[i][j] == false) {
                    judge = false;
                }
            }
        }
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

