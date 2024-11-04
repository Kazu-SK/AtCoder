
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


vector<LL> PrimeFactorization(LL N) {

	LL rem = N;
	vector<LL> p;

	for (LL i = 2; i * i <= N; i++) {
		while (rem % i == 0) {
			rem /= i;
			p.push_back(i);
		}
	}

	if (rem != 1LL) p.push_back(rem);

	return p;
}

int main()
{
	LL N = 0;
	vector<LL> prime_num;
	map<int,vector<LL>> fase;


	cin >> N;

	fase[0].push_back(N);

	LL ans = 0;

	while (true) {
		
		for (int i = 0; i < fase[ans].size(); i++) {

			prime_num = PrimeFactorization(fase[ans][i]);

			if (prime_num.size() >= 2) {
				LL add_num = 1;
				for (int i = 0; i < prime_num.size() / 2; i++)
					add_num *= prime_num[i];

				fase[ans + 1].push_back(add_num);
				add_num = 1;

				for (int i = prime_num.size() / 2; i < prime_num.size(); i++)
					add_num *= prime_num[i];

				fase[ans + 1].push_back(add_num);
			}
		}

		if (fase[ans + 1].size() > 0) {
			fase[ans].clear();
			ans++;
		}
		else {
			break;
		}
	}

	cout << ans << endl;

	return 0;
}

