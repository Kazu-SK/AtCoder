#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0;
	long long K = 0;

	cin >> N >> K;

	vector<long long> S(N + 1, 0);
	bool zero = false;

	for (int i = 1; i <= N; i++) {
		cin >> S[i];

		if (S[i] == 0) {
			zero = true;
		}
	}

	if (zero) {
		cout << N << endl;
		return 0;
	}


	int right = 1;
	long long multi = 1;
	int ans_length = 0;

	for (int left = 1; left <= N; left++) {

		if (left > right)
			right = left;

		while (right <= N && multi * S[right] <= K) {
			multi *= S[right];
			right++;
		}

		ans_length = max(ans_length, right - left);

		if (S[left] != 0 && multi != 1)
			multi = multi / S[left];
	}

	cout << ans_length << endl;

	return 0;
}

