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

	vector<pair<int, int>> Movie(N);

	for (int i = 0; i < N; i++) {
		cin >> Movie[i].first >> Movie[i].second;
	}

	sort(Movie.begin(), Movie.end(), [](const auto& lhs, const auto& rhs) { return lhs.second < rhs.second; });

	LL time = 0;
	LL ans = 1;

	time = Movie[0].second;

	for (int i = 1; i < N; i++) {

		if (Movie[i].first >= time) {
			time = Movie[i].second;
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}

