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
	int D = 0;


	cin >> N >> D;

	vector<char> S(N + 1);


	for (int i = 1; i <= N; i++) {
		cin >> S[i];
	}

	for (int i = N; i >= 1; i--) {
		if (S[i] == '@') {
			S[i] = '.';
			D--;
		}

		if (D == 0)
			break;
	}

	for (int i = 1; i <= N; i++) {
		cout << S[i];
	}

	return 0;
}

