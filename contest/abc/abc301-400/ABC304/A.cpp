
#include <iostream>
#include <vector>


using namespace std;

using LL = long long;

int main()
{
	int N = 0;

	cin >> N;


	vector<string> S(N + 1);
	vector<int> A(N + 1, 0);


	int min_A = 1e9;
	int min_A_itr = N;
	for (int i = 1; i <= N; i++) {
		cin >> S[i] >> A[i];

		if (min_A > A[i]) {
			min_A = min(min_A, A[i]);
			min_A_itr = i;
		}
	}

	for (int i = min_A_itr ; i <= N; i++)
		cout << S[i] << endl;

	for(int i = 1 ; i < min_A_itr ; i++)
		cout << S[i] << endl;


	return 0;
}

