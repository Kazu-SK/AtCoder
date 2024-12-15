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

string Base10to2(LL n) {

	string ans;

	int waru = 1;
	int i_amari;
	char c_amari;

	if (n == 0) {
		ans = '0';
		return ans;
	}

	while (n) {

		i_amari = n % 2;
		n /= 2;

		c_amari = i_amari + '0';

		ans.insert(ans.begin(), c_amari);
	}

	return ans;
}

int main()
{
	LL N = 0;
	string base2;


	cin >> N;


	base2 = Base10to2(N);


	bool second_win = true;

	for (int i = 0; i < base2.size(); i++) {
		if (base2[i] == '0') {
			second_win = false;
			break;
		}
	}

	if (second_win)
		cout << "Second" << endl;
	else
		cout << "First" << endl;

	return 0;
}

