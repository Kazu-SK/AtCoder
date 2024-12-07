
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
	LL N = 0;
	LL ans = 0;

	cin >> N;


	vector<char> S(N + 1);
	vector<pair<int, int>> o_pair;
	vector<pair<int, int>> x_pair;

	for (int i = 1; i <= N; i++)
		cin >> S[i];

	pair<int, int> p;
	int o_f = 1e9;
	int o_e = 0;
	int x_f = 1e9;
	int x_e = 0;

	for (int i = 1; i <= N; i++) {

		if (S[i] == 'o') {
			o_f = min(o_f, i);
			o_e = max(o_e, i);
		}
		else {
			if (o_f < o_e) {
				p.first = o_f;
				p.second = o_e;
				o_pair.push_back(p);
			}
			o_f = 1e9;
			o_e = 0;
		}

		if (S[i] == 'x') {
			x_f = min(x_f, i);
			x_e = max(x_e, i);
		}
		else {
			if (x_f < x_e) {
				p.first = x_f;
				p.second = x_e;
				x_pair.push_back(p);
			}
			x_f = 1e9;
			x_e = 0;
		}
	}

	if (o_f < o_e) {
		p.first = o_f;
		p.second = o_e;
		o_pair.push_back(p);
	}

	if (x_f < x_e) {
		p.first = x_f;
		p.second = x_e;
		x_pair.push_back(p);
	}

	ans = N * (N - 1) / 2;

	for (int i = 0; i < o_pair.size(); i++) {
		LL n = o_pair[i].second - o_pair[i].first + 1;
		ans -= n * (n - 1) / 2;
	}

	for (int i = 0; i < x_pair.size(); i++) {
		LL n = x_pair[i].second - x_pair[i].first + 1;
		ans -= n * (n - 1) / 2;
	}

	cout << ans << endl;

	return 0;
}

