
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


	bool pass[2] = { false, true };


	for (int i = 0; i < N; i++) {

		if (S[i] == 'x') {
			pass[1] = false;
		}

		if (S[i] == 'o') {
			pass[0] = true;
		}
	}

	if (pass[0] == true && pass[1] == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	return 0;
}

