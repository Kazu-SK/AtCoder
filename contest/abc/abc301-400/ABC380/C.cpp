
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
	int K = 0;
	int first1_itr = -1;
	vector<pair<int, int>> info;
	vector<int> S_num;


	cin >> N >> K;


	for (int i = 0; i < N; i++) {
		char s_c;
		int s_i = 0;

		cin >> s_c;

		S_num.push_back(s_c - '0');

		if (first1_itr == -1 && s_c == '1') {
			first1_itr = i;
		}
	}

	int fir = -1;
	int sec = -1;
	pair<int, int> p;

	for (int i = first1_itr; i < N; i++) {
		if (S_num[i] == 1 && fir == -1) {
			fir = i;
			sec = -1;
		}
		else {
			if (S_num[i] == 0 && sec == -1){
				sec = i - 1;

				p.first = fir;
				p.second = sec;

				info.push_back(p);

				fir = -1;
			}
		}

		if (S_num[i] == 1 && i == N - 1) {
			p.first = fir;
			p.second = i;

			info.push_back(p);
		}
	}

	K -= 1;

	for (int i = info[K].first; i <= info[K].second; i++) {
		S_num[i] = 0;
	}


	int l = info[K - 1].second + 1;
	int r = l + info[K].second - info[K].first;

	for (int i = l; i <= r; i++) {
		S_num[i] = 1;
	}

	for (int i = 0; i < S_num.size(); i++) {
		cout << S_num[i];
	}

	return 0;
}

