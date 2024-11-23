#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	LL N = 0;
	LL ans = 0;

	set<LL> possible_num;


	cin >> N;

	for (LL a = 2; a * a <= N; a++) {
		LL num = a * a;

		while (num <= N) {
			possible_num.insert(num);
			num *= a;
		}
	}

	ans = N - possible_num.size();

	cout << ans << endl;

	return 0;
}

