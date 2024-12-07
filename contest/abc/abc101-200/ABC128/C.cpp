
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
	int N = 0;
	int M = 0;


	cin >> N >> M;

	vector<int> k(M);
	vector<vector<int>> s(M);
	vector<int> p(M);
	vector<int> k_s_num(M);


	for (int i = 0; i < M; i++) {
		cin >> k[i];

		for (int j = 0; j < k[i]; j++) {
			int s_num = 0;
			cin >> s_num;
			s_num--;

			k_s_num[i] += (1 << s_num);
		}
	}

	for (int i = 0; i < M; i++)
		cin >> p[i];

	int ans = 0;

	for (int num = 0; num < (1 << N) ; num++) {

		int light_on = 0;

		for (int i = 0; i < M; i++) {

			int s_on = num & k_s_num[i];
			int s_on_num = 0;

			for (int bit = 0; bit < N; bit++) {
				if (s_on & (1 << bit))
					s_on_num++;
			}
			
			if (p[i] == s_on_num % 2) {
				light_on++;
			}
		}

		if (light_on == M) {
			ans++;
		}
	}

	cout << ans << endl;


	return 0;
}

