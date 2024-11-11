
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
	int N = 0, M = 0;
	int ans = 1;
	map<int, vector<int>> Map;
	vector<int> select_people;

	cin >> N >> M;

	vector<int> x(M);
	vector<int> y(M);

	for (int i = 0; i < M; i++) {
		cin >> x[i] >> y[i];

		Map[x[i]].push_back(y[i]);
		Map[y[i]].push_back(x[i]);
	}

	for (int people = 0; people < (1 << N); people++) {

		for (int bit = 0; bit < N; bit++) {
			if (people & (1 << bit)) {
				select_people.push_back(bit + 1); //bit + 1 : 各議員は1～Nまでの番号が付けられているため
			}
		}

		int judge = 0;
		int acquainted = 0;
		int select_people_size = select_people.size();

		if (select_people_size >= 2) {

			judge = (select_people_size - 1) * select_people_size / 2;

			for (int i = 0; i < select_people.size() - 1; i++) {
				for (int j = i + 1; j < select_people.size(); j++) {
					for (int z = 0; z < Map[select_people[i]].size(); z++) {
						if (Map[select_people[i]][z] == select_people[j]) {
							acquainted++;
							break;
						}
					}
				}
			}
		}

		if (acquainted == judge) {
			ans = max(ans, select_people_size);
		}

		select_people.clear();
	}

	cout << ans << endl;

	return 0;
}

