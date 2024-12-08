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

	int kara_count = 0;

	for (int i = 1; i <= N; i++) {
		cin >> S[i];

		if (S[i] == '.')
			kara_count++;
	}

	cout << kara_count + D << endl;

	return 0;
}

