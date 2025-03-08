#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
	int N = 0, Q = 0;

	//vector<int> house(N + 1);
	cin >> N >> Q;

	vector<int> piegon_to_box(N + 1); // 鳩が入っている袋の番号
	vector<int> house_to_box(N + 1); // 巣の中に入っている袋の番号
	vector<int> box_to_house(N + 1); // 袋のある巣の番号

	for (int i = 1; i <= N; i++) {
		piegon_to_box[i] = i;
		house_to_box[i] = i;
		box_to_house[i] = i;
	}

	for (int q = 0; q < Q; q++) {

		int op;
		int a, b;


		cin >> op;

		if (op == 1) {
			cin >> a >> b;
			piegon_to_box[a] = house_to_box[b];
		}
		else if (op == 2) {
			cin >> a >> b;

			swap(house_to_box[a], house_to_box[b]); //巣の中に入っている袋を交換

			//袋の交換に伴い、袋のある巣の番号を更新する。
			box_to_house[house_to_box[a]] = a;
			box_to_house[house_to_box[b]] = b;
		}
		else {
			cin >> a;
			cout << box_to_house[piegon_to_box[a]] << endl;
		}
	}


	return 0;
}

