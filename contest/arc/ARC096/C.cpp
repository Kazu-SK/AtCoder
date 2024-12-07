
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
	int A, B, C, X, Y;
	LL ans = 1e18;


	cin >> A >> B >> C >> X >> Y;


	for (int ab_num = 0; ab_num <= 2e5; ab_num += 2) {

		int a_num = 0;
		int b_num = 0;
		LL money = 0;
		
		//abピザによって作られるaピザ,bピザの枚数 a_num, b_num
		a_num = ab_num / 2;
		b_num = ab_num / 2;

		money += max(0, X - a_num) * A;
		money += max(0, Y - b_num) * B;
		money += ab_num * C;

		ans = min(ans, money);
	}

	cout << ans << endl;

	return 0;
}

