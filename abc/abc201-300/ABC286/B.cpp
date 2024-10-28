
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


	int S_itr = 1;
	while (S_itr < S.size()) {
		
		if (S[S_itr - 1] == 'n' && S[S_itr] == 'a') {
			S.insert(S.begin() + S_itr, 'y');
			S_itr++;
		}

		S_itr++;
	}

	for (int i = 0; i < S.size(); i++) {
		cout << S[i];
	}

	return 0;
}

