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

LL GCD(LL a, LL b){ 
	if (b == 0) return a;
	else return GCD(b, a % b);
}

int main()
{
	LL N = 0;
	int K = 0;
	LL ans = 0;

	cin >> N >> K;


	vector<LL> V(K);

	for (int i = 0; i < K; i++)
		cin >> V[i];

	for (int num = 1; num < (1 << K); num++) {

		int bit_on_num = 0;
		vector<LL> v;

		for (int bit = 0; bit < K; bit++) {
			if (num & (1 << bit)) {
				bit_on_num++;
				v.push_back(V[bit]);
			}
		}

		LL lcm = v[0];
		LL gcd = 0;

		for (int i = 1; i < v.size(); i++) {
			gcd = GCD(lcm, v[i]);

			if (lcm / gcd > N / v[i]) {
				lcm = -1;
				break;
			}
			else 
				lcm = (lcm / gcd) * v[i];
		}

		if (lcm == -1)
			continue;

		if (bit_on_num % 2 == 1)
			ans += N / lcm;
		else
			ans -= N / lcm;
	}

	cout << ans << endl;

	return 0;
}


