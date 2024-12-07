
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;
	int K = 0;
	string S;

	cin >> N >> K;
	cin >> S;


	int count = 0;
	string ans;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'o' && count < K) {
			ans += 'o';
			count++;
		}
		else {
			ans += 'x';
		}
	}

	cout << ans << endl;

	return 0;
}