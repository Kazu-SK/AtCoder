
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;

	vector<int> A(N);

	for (int i = 0; i < N; i++)
		cin >> A[i];


	vector<bool> call(N, false);

	for (int i = 0; i < N; i++) {
		if (call[i] == false) {
			call[A[i] - 1] = true;
		}
	}

	int call_count = 0;
	for (int i = 0; i < N; i++) {
		if (call[i] == false)
			call_count++;
	}

	cout << call_count << endl;
	for (int i = 0; i < N; i++) {
		if (call[i] == false)
			cout << i + 1 << " ";
	}

	return 0;
}

