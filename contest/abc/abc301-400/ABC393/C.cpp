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
	int N = 0, M = 0;


	cin >> N >> M;


	vector<int> U(M);
	vector<int> V(M);

	pair<int, int> p;
	map<pair<int, int>, bool> Map;
	int ans = 0;

	for (int i = 0; i < M; i++) {
		cin >> U[i] >> V[i];

		if (U[i] == V[i]) {
			ans++;
		}
		else {
			p.first = U[i];
			p.second = V[i];

			if (Map[p] == false) {
				Map[p] = true;

				p.first = V[i];
				p.second = U[i];

				Map[p] = true;
			}
			else
				ans++;

		}
	}


	cout << ans << endl;

	return 0;
}

