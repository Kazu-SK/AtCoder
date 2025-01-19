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
	int Q = 0;
	vector<LL> snake(1,0);
	LL offset = 0;

	cin >> Q;

	for (int q = 1; q <= Q; q++) {
		int type = 0;
		LL last_itr = snake.size() - 1;

		cin >> type;

		if (type == 1) {
			LL l = 0;
			cin >> l;
			snake.push_back(snake[last_itr] + l);
		}

		if (type == 2)
			offset++;

		if (type == 3) {
			LL k = 0;
			cin >> k;
			cout << snake[offset + k - 1] - snake[offset] << endl;
		}
	}

	return 0;
}

