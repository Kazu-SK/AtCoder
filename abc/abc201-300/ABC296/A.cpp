#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;


	vector<char> S(N);


	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}


	for (int i = 1; i < N; i++) {

		bool judge = true;

		if ((S[i] == 'M' && S[i - 1] == 'F') || (S[i] == 'F' && S[i - 1] == 'M')) {
			judge = true;
		}
		else {
			judge = false;
		}

		if (judge == false) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;


	return 0;
}

