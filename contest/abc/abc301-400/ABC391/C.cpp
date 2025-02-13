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
	LL N = 0;
	LL Q = 0;


	cin >> N >> Q;

	vector<int> query(Q);
	vector<LL> current_birds_house(N + 1, 0);
	vector<LL> birds_num(N + 1, 1);
	LL some_birds_house_num = 0;

	for (int i = 1; i <= N; i++) {
		current_birds_house[i] = i; //[bird] = house;
	}

	for (int i = 0; i < Q; i++) {
		LL P = 0, H = 0;

		cin >> query[i];

		if (query[i] == 1) {
			cin >> P >> H;

			birds_num[current_birds_house[P]]--;

			if (birds_num[current_birds_house[P]] == 1)
				some_birds_house_num--;

			current_birds_house[P] = H;
			birds_num[H]++;

			if (birds_num[H] == 2)
				some_birds_house_num++;
		}
		else {
			cout << some_birds_house_num << endl;
		}
	}


	return 0;
}

