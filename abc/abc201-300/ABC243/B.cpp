
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


    cin >> N;

    vector<int> A(N);
    vector<int> B(N);


    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < N; i++)
        cin >> B[i];


    int ans1_num = 0;
    int ans2_num = 0;

    for (int a = 0; a < N; a++) {
        for (int b = 0; b < N; b++) {
            //cout << A[a] << " " << B[b] << endl;
            if (A[a] == B[b]) {
                if (a == b) {
                    ans1_num++;
                }
                else {
                    ans2_num++;
                }
            }
        }
    }

    cout << ans1_num << endl;
    cout << ans2_num << endl;

    return 0;
}

