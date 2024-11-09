#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0;


	cin >> N;


	int offset = 1;
	vector<int> scaffold_h(N + offset, 0);
	vector<int> dp(N + offset, 0);

	for (int i = 1; i <= N; i++)
		cin >> scaffold_h[i];

	dp[1] = 0;
	dp[2] = dp[1] + abs(scaffold_h[2] - scaffold_h[1]);

	for (int i = 3; i <= N; i++)
		dp[i] = min(dp[i - 1] + abs(scaffold_h[i] - scaffold_h[i - 1]), dp[i - 2] + abs(scaffold_h[i] - scaffold_h[i - 2]));


	cout << dp[N] << endl;

	return 0;
}

