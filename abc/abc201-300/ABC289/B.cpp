
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0, M = 0;


	cin >> N >> M;

	vector<int> a(M);
	vector<int> v(N + 1);

	for (int i = 0; i < M; i++) {
		cin >> a[i];
	}


	for (int i = 0; i < M; i++) {
		v[a[i]] = 1;
	}

	vector<int> ans;
	for (int num = 1; num <= N; num++) {
		
		int j = num;

		while (v[j]) {
			j++;
		}

		for (int i = j; i >= num; i--) {
			ans.push_back(i);
		}

		num = j;
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}

