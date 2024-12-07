#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using LL = long long;

int main()
{
	int N = 0;

	cin >> N;


	vector<int> A(N);
	vector<int> sort_A(N);


	for (int i = 0; i < N; i++) {
		cin >> A[i];

		sort_A[i] = A[i];
	}


	sort(sort_A.rbegin(), sort_A.rend());

	int search_num = sort_A[1];
	int ans = 0;

	for (int i = 0; i < N; i++) {
		if (A[i] == search_num) {
			ans = i + 1;
		}
	}

	cout << ans << endl;


	return 0;
}
