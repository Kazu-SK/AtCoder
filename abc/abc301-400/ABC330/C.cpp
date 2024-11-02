#include <iostream>

using namespace std;

int main()
{
	long long D;
	long long y = 2e6;


	cin >> D;

	long long ans = D;

	for (long long x = 1; x <= 2e6; x++) {

		while (y > 0 && x * x + y * y > D) {
			y--;
		}

		ans = min(ans, abs(x * x + y * y - D));
		ans = min(ans, abs(x * x + (y + 1) * (y + 1) - D));
	}

	cout << ans << endl;

	return 0;
}

