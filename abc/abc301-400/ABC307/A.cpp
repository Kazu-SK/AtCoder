
#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

int main()
{
	int N = 0;


	cin >> N;


	vector<int> A(N * 7 + 1, 0);
	vector<int> sum(N * 7 + 1, 0);
	vector<int> ans;

	for (int i = 1; i <= N * 7; i++) 
		cin >> A[i];


	for (int i = 1; i <= N * 7; i++) {
		sum[i] = sum[i - 1] + A[i];

		if (i % 7 == 0) {

			if (ans.size() == 0) {
				ans.push_back(sum[i]);
			}
			else {
				sum[i] -= ans[ans.size() - 1];
				ans.push_back(sum[i]);
			}
				
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}

