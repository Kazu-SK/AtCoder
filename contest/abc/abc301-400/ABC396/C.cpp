#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
	int N = 0;
	int M = 0;

	int B_itr = 0;
	int W_itr = 0;
	int B_count = 0;
	int W_count = 0;
	llong ans = 0;


	cin >> N >> M;

	B_itr = N;
	W_itr = M;

	vector<llong> B(N + 1,-1e12);
	vector<llong> W(M + 1,-1e12);


	for (int i = 1; i <= N; i++) {
		cin >> B[i];
	}

	for (int i = 1; i <= M; i++) {
		cin >> W[i];
	}

	sort(B.begin(), B.end());
	sort(W.begin(), W.end());

	while(true){

		if (B[B_itr] >= 0) {

			ans += B[B_itr];
			B_count++;
			B_itr--;
		}
		else {
			if (B_count > W_count) {

				if (W[W_itr] >= 0) {

					ans += W[W_itr];
					W_itr--;
					W_count++;
				}
				else {
					break;
				}
			}
			else {
				if (B[B_itr] + W[W_itr] >= 0) {

					ans += B[B_itr] + W[W_itr];
					B_itr--;
					W_itr--;
					B_count++;
					W_count++;
				}
				else {
					break;
				}
			}
		}

	}


	cout << ans << endl;

	return 0;
}

