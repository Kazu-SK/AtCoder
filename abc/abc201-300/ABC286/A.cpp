
#include <iostream>
#include <vector>

using namespace std;


int main() {
	int n, p, q, r, s;

	cin >> n >> p >> q >> r >> s;

	vector<int> a(n + 1);

	for (int i = 1; i <= n; i++)cin >> a[i];

	for (int i = 1; i <= n; i++) {
		if (i >= p && i <= q) {
			cout << a[i + r - p] << " ";
		}
		else if (i >= r && i <= s) {
			cout << a[i + p - r] << " ";
		}
		else {
			cout << a[i] << " ";
		}


	}

	return 0;
}
