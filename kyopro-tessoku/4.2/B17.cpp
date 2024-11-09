
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	int N = 0;


	cin >> N;


	int offset = 1;
	vector<int> scaffold_h(N + offset, 0);
	vector<int> dp(N + offset, 0);
	vector<int> answer;

	for (int i = 1; i <= N; i++)
		cin >> scaffold_h[i];

	dp[1] = 0;
	dp[2] = dp[1] + abs(scaffold_h[2] - scaffold_h[1]);

	for (int i = 3; i <= N; i++)
		dp[i] = min(dp[i - 1] + abs(scaffold_h[i] - scaffold_h[i - 1]), dp[i - 2] + abs(scaffold_h[i] - scaffold_h[i - 2]));


	answer.push_back(N);

	int root = N;
	int jump1_root = 0;
	int jump2_root = 0;

	while(answer.back() > 2){

		jump1_root = dp[root - 1] + abs(scaffold_h[root] - scaffold_h[root - 1]);
		jump2_root = dp[root - 2] + abs(scaffold_h[root] - scaffold_h[root - 2]);

		if (jump1_root < jump2_root) {
			answer.push_back(root-1);
			root = root - 1;
		}
		else {
			answer.push_back(root-2);
			root = root - 2;
		}
	}

	if(answer.back() != 1)
		answer.push_back(1);

	reverse(answer.begin(), answer.end());

	cout << answer.size() << endl;
	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << " ";

	return 0;
}

