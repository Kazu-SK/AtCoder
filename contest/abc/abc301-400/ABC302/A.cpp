
#include <iostream>
#include <vector>

using namespace std;

using LL = long long;

int main()
{
	LL A = 0, B = 0;


	cin >> A >> B;

	LL ans_count = 0;

	if (A % B == 0) {
		ans_count = A / B;
	}
	else {
		ans_count = A / B + 1;
	}

	cout << ans_count << endl;

	return 0;
}

