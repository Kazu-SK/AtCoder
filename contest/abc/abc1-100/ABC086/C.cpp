
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;

	vector<int> t(N + 1, 0);
	vector<int> x(N + 1, 0);
	vector<int> y(N + 1, 0);


	for (int i = 1; i <= N; i++) {
		cin >> t[i] >> x[i] >> y[i];
	}


	int diff_t = 0;
	int diff_x = 0;
	int diff_y = 0;
	bool judge = true;


	for (int i = 1; i <= N; i++) {

		diff_t = t[i] - t[i - 1];
		diff_x = abs(x[i] - x[i - 1]);
		diff_y = abs(y[i] - y[i - 1]);

		if (diff_x + diff_y <= diff_t) {

			if ((diff_t % (diff_x + diff_y)) % 2 == 0){
				continue;
			}
			else {
				judge = false;
				break;
			}
		}
		else {
				judge = false;
				break;
		}
	}

	if (judge) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	return 0;
}

