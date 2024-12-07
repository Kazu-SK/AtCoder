
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;
using uLL = unsigned long long;

const LL DIV = 1e9 + 7;

uLL arithmeticprogression(uLL n) {

	uLL sum = 0;

	n %= DIV;

	sum = (n * (1 + n) / 2) % DIV;

	return sum;
}


int main()
{
	uLL L = 0, R = 0;
	uLL ex[20] = { 1 }; //10^itr
	uLL ans = 0;

	cin >> L >> R;

	for (int i = 1; i < 20; i++) {
		ex[i] = ex[i - 1] * 10;
	}

	for (int i = 0; i < 19; i++) {

		uLL L_num = max(ex[i], L) - 1;
		uLL R_num = min(ex[i + 1] - 1, R);

		//cout << "L_num = " << L_num << '\t' << "R_num = " << R_num << endl;

		if (L_num > R_num)continue;

		uLL L_a = arithmeticprogression(L_num);
		uLL R_a = arithmeticprogression(R_num);

		ans += (R_a - L_a + DIV) * (i + 1) % DIV;

		ans %= DIV;

		if (R_num == R)
			break;
	}

	cout << ans << endl;

	return 0;
}

