
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    LL K = 0, X = 0;


    cin >> N >> K >> X;

    vector<LL> A(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    bool loop = true;

	sort(A.rbegin(), A.rend());

	for (int i = 0; i < N; i++) {

		LL use_coupon = 0;

		if (K > 0) {
			if (A[i] > X) {
				use_coupon = A[i] / X;

				if (use_coupon <= K) {
					A[i] -= use_coupon * X;
					K -= use_coupon;
				}
				else {
					A[i] -= K * X;
					K = 0;
				}

			}
			else {
				break;
			}
		}
		else {
			break;
		}
	}

	sort(A.rbegin(), A.rend());

	for (int i = 0; i < N; i++) {
		if (K > 0) {
			A[i] = 0;
			K -= 1;
		}
		else {
			break;
		}
	}

    LL ans = 0;

    for (int i = 0; i < N; i++) {
        ans += A[i];
    }

    cout << ans << endl;

    return 0;
}

