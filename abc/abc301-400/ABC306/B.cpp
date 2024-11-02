
#include <iostream>
#include <vector>

using namespace std;

using uLL = unsigned long long;


uLL pow(int a, int b) {

	uLL answer = 1;

	for (int i = 0; i < b; i++) {
		answer *= a;
	}

	return answer;
}

int main()
{
	int A[64];
	uLL ans = 0;


	for (int i = 0; i < 64; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < 64; i++) {
		if (A[i] == 1) {
			ans += pow(2, i);
		}
	}

	cout << ans << endl;

	return 0;
}

