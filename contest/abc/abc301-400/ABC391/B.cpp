#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	int N, M;


	cin >> N >> M;

	vector<vector<char>> S(N + 1, vector<char>(N + 1));
	vector<vector<char>> T(M + 1, vector<char>(M + 1));

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> S[i][j];
		}
	}

	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> T[i][j];
		}
	}


	for (int a = 1; a <= N - M + 1; a++) {
		for (int b = 1; b <= N - M + 1; b++) {

			bool judge = true;

			for (int k = 1; k <= M; k++) {
				for (int p = 1; p <= M; p++) {
					if (S[a + k - 1][b + p - 1] != T[k][p])
						judge = false;

					//cout << a + k - 1 << " " << b + p - 1 << "\t" << k << " " << p << endl;
					//cout << S[a + k - 1][b + p - 1] << "\t" << T[k][p] << endl;
				}
			}

			cout << endl;

			if (judge) {
				cout << a << " " << b << endl;
				return 0;
			}
		}
	}

	return 0;
}

