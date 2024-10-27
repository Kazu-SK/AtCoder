
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int A = 0, B = 0, C = 0;
	int X = 0;


	cin >> A >> B >> C;
	cin >> X;

	const int A_p = 500;
	const int B_p = 100;
	const int C_p = 50;

	int sum_p = 0;
	int ans = 0;

	for (int a = 0; a <= A; a++) {
		for (int b = 0; b <= B; b++) {
			for (int c = 0; c <= C; c++) {
				sum_p = A_p * a + B_p * b + C_p * c;

				if (sum_p == X) {
					ans++;
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}

