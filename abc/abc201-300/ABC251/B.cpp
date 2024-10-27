
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, W = 0;
    int ans_count = 0;
    map<int, bool> Map;


    cin >> N >> W;

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
		int sum = 0;

		sum = A[i];

		if (A[i] <= W) {
            if (Map[A[i]] == false) {
                Map[A[i]] = true;
                ans_count++;
            }
        }
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = 0;

            sum = A[i] + A[j];

            if (sum <= W) {
				if (Map[sum] == false) {
					Map[sum] = true;
					ans_count++;
				}
            }
        }
    }

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int z = j + 1; z < N; z++) {
                int sum = 0;

                sum = A[i] + A[j] + A[z];

                if (sum <= W) {
                    if (Map[sum] == false) {
                        Map[sum] = true;
                        ans_count++;
                    }
                }
            }
        }
    }

	cout << ans_count << endl;

    return 0;
}

