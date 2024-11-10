
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	LL N, M;

	cin >> N >> M;


	vector<pair<LL, LL>> masu(M + 1);

	for (int i = 1; i <= M; i++)
		cin >> masu[i].first; //X

	for (int i = 1; i <= M; i++)
		cin >> masu[i].second; //A

	sort(masu.begin(), masu.end());

	bool judge = true;
	LL no_storn_masu = N;
	LL ans = 0;

	for (LL i = M; i >= 1; i--) {
		LL masu_num = masu[i].first;
		LL init_storn_num = masu[i].second;
	   
		if (no_storn_masu - masu_num >= init_storn_num - 1) {
			ans += (init_storn_num - 1) * (1 + (init_storn_num - 1)) / 2;
			ans += (no_storn_masu - (masu_num + init_storn_num - 1)) * init_storn_num;
			no_storn_masu -= init_storn_num;
		}
		else {
			judge = false;
		}

		//cout << "no_storn_masu = " << no_storn_masu << endl;
		//cout << "judge = " << judge << endl;
		//cout << "ans = " << ans << endl;
	}

	if (judge && no_storn_masu == 0) {
		cout << ans << endl;
	}
	else {
		cout << -1 << endl;
	}

    return 0;
}

