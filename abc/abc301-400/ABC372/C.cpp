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
    int Q = 0;


    string S;
    string ABC = "ABC";

    cin >> N >> Q;
    cin >> S;

    vector<int> X(Q);
    vector<char> C(Q);

    for (int i = 0; i < Q; i++) {
        cin >> X[i] >> C[i];

        X[i] -= 1;
    }

    int count = 0;
    int ABC_count = 0;
    for (int i = 0; i < S.size() - 1; i++) {

        count = 0;
        for (int j = 0; j < 3; j++) {
            if (S[i + j] == ABC[j]) {
                count++;
            }
        }

        if (count == 3) {
            ABC_count++;
        }
    }

    //cout << ABC_count << endl;

    for (int i = 0; i < Q; i++) {
        int l_j = max(X[i] - 2, 0);
        int r_j = min(X[i] + 2, N - 1);


        int count_a[2] = { 0 };

        for (int a = 0; a < 2; a++) {

            count_a[a] = 0;

            for (int j = l_j; j < r_j - 1; j++) {
                count = 0;
                for (int z = 0; z < 3; z++) {

                    if (S[j + z] == ABC[z]) {
                        count++;
                    }
                }

                if (count == 3) {
                    count_a[a]++;
                }
            }

            if (a == 0)
                S[X[i]] = C[i];
        }

        ABC_count += (count_a[1] - count_a[0]);
        cout << ABC_count << endl;
    }




    return 0;
}

