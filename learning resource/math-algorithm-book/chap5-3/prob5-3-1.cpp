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
	LL H = 0, W = 0;


	cin >> H >> W;


	bool even_H = true;
	bool even_W = true;

	if (H % 2 == 0)
		even_H = true;
	else
		even_H = false;

	if (W % 2 == 0)
		even_W = true;
	else
		even_W = false;


	LL ans = 0;

	if (H == 1 || W == 1) {
		ans = 1;
	}
	else {
		if (even_H) {
			ans = H * W / 2;
		}
		else {
			if (even_W) {
				ans = ((H / 2 + 1) + (H / 2)) * (W / 2);
			}
			else {

				ans = (H / 2 + 1) * (W / 2 + 1) + (H / 2) * (W / 2);
			}
		}
	}

	cout << ans << endl;

	return 0;
}

