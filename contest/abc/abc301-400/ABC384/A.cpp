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
	char c[2];


	cin >> N;

	vector<char> S(N);

	cin >> c[0] >> c[1];

	for (int i = 0; i < N; i++)
		cin >> S[i];

	for (int i = 0; i < N; i++) {
		if (S[i] != c[0])
			S[i] = c[1];
	}

	for (int i = 0; i < N; i++) {
		cout << S[i];
	}

	return 0;
}

