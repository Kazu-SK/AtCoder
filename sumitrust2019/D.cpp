
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
	vector<vector<int>> num_i(11);


	cin >> N;


	vector<char> S(N);

	for (int i = 0; i < N; i++) {
		int num = 0;

		cin >> S[i];

		num = S[i] - '0';
		num_i[num].push_back(i);
	}

	int ans = 0;

	for (int keta_a = 0; keta_a <= 9; keta_a++) {
		for (int keta_b = 0; keta_b <= 9; keta_b++) {
			for (int keta_c = 0; keta_c <= 9; keta_c++) {

				int search_b_num = 0;
				int search_b_itr = -1;
				
				int search_c_num = 0;
				int search_c_itr = -1;

				if (num_i[keta_a].size() < 1)continue;
				if (num_i[keta_b].size() < 1)continue;
				if (num_i[keta_c].size() < 1)continue;

				search_b_num = num_i[keta_a][0];

				search_b_itr = upper_bound(num_i[keta_b].begin(), num_i[keta_b].end(), search_b_num) - num_i[keta_b].begin();
				if (!(search_b_itr >= 0 && search_b_itr < num_i[keta_b].size()))continue;

				search_c_num = num_i[keta_b][search_b_itr];

				search_c_itr = upper_bound(num_i[keta_c].begin(), num_i[keta_c].end(), search_c_num) - num_i[keta_c].begin();
				if (!(search_c_itr >= 0 && search_c_itr < num_i[keta_c].size()))continue;

				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}

