#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0;
	int K = 0;


	cin >> N >> K;

	vector<char> S(N + 1, '0');

	for (int i = 1; i <= N; i++) {
		cin >> S[i];
	}

	int on_num = 0;
	for (int i = 1; i <= N; i++) {

		if (S[i] == '1')
			on_num++;
	}


	if (on_num % 2 == 0 && K % 2 == 0) {
		cout << "Yes" << endl;
	}
	else if (on_num % 2 == 1 && K % 2 == 1) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}

