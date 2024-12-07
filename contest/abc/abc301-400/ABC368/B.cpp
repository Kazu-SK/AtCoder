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


    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool judge = true;
    int ans_count = 0;

    while (judge) {

        sort(A.rbegin(), A.rend());

        A[0] -= 1;
        A[1] -= 1;

        int num_count = 0;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] > 0) {
                num_count++;
            }

            if (num_count >= 2)
                break;
            //cout << A[i] << " ";
        }
        //cout << endl;

        ans_count++;

        if (num_count <= 1) {
            break;
        }
    }

    cout << ans_count << endl;

    return 0;
}

