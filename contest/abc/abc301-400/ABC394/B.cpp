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

	vector<string> S(N);
	vector<int> size(N);
	vector<pair<int, string>> p(N);

	for (int i = 0; i < N; i++) {
		cin >> S[i];
		size[i] = S[i].size();

		p[i].first = size[i];
		p[i].second = S[i];
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < N; i++) {
		cout << p[i].second;
	}

	return 0;
}

