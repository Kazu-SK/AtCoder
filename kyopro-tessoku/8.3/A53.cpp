#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int Q = 0;


	cin >> Q;

	vector<int> queue_type(Q, 0);
	priority_queue<int, vector<int>, greater<int>> queue_price;

	int x_price = 0;

	const int push = 1;
	const int minimum_top = 2;
	const int minimum_pop = 3;


	for (int i = 0; i < Q; i++) {

		cin >> queue_type[i];

		if (queue_type[i] == push) {
			cin >> x_price;
			queue_price.push(x_price);
		}

		if (queue_type[i] == minimum_top) {
			cout << queue_price.top() << endl;
		}

		if (queue_type[i] == minimum_pop) {
			queue_price.pop();
		}
	}

	return 0;
}

