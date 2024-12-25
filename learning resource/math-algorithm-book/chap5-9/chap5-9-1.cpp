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
	int N = 0;
	const int YUKICHI = 10000;
	const int ICHIYO = 5000;
	const int HIDEYO = 1000;
	int ans = 0;
	int bill[3] = { YUKICHI, ICHIYO, HIDEYO };


	cin >> N;


	for (int i = 0; i < 3; i++) {
		ans += N / bill[i];
		N %= bill[i];
	}

	cout << ans << endl;

	return 0;
}

