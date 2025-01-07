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
	int N = 0;

	cin >> N;

	vector<char> S(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> S[i];
	}

	bool judge = true;

	if (N % 2 == 0) {
		judge = false;
	}
	else {
		int slash;

		slash = (N + 1) / 2;

		if (S[slash] != '/') {
			judge = false;
		}
		else {
			for (int i = 1; i < slash; i++) {
				if (S[i] != '1')
					judge = false;
			}

			for (int i = slash + 1; i <= N; i++) {
				if (S[i] != '2')
					judge = false;
			}
		}
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}

