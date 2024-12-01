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

LL GCD(LL a, LL b) { 
	if (b == 0) return a;
	else return GCD(b, a % b);
}

LL LCM(LL a, LL b) {

	LL g = 0;
	LL ans = 0;
	const LL LIMIT = 1e18;

	g = GCD(a, b);

	if (a / g > LIMIT / b) // (a / g) * b > LIMIT 
		ans = -1;
	else
		ans = (a / g) * b;

	return ans;
}

int main()
{
	int N = 0, M = 0;


	cin >> N >> M;

	vector<LL> A(N);
	LL ans = 0;


	for (int i = 0; i < N; i++) {
		cin >> A[i];
		
		//小数を消して計算しやすくするため、A[i] /= 2することで
		//半公倍数の式を
		//X = A[i] * (p + 0.5)から
		//X = (A[i] / 2) * (2p + 1)に変更する。  
		A[i] /= 2;
	}

	//①
	//A[i] / 2 = A'とする。
	//まず(2p + 1)については考えず、
	//A'[0]..A'[N-1]の最小公倍数を求める。
	//(2p + 1)がどのような値になるべきかについては②で考える。
	LL X = 1;
	for (int i = 0; i < N; i++) {
		X = LCM(X, A[i]);
	}

	for (int i = 0; i < N; i++) {

		//②
		//A[i] / 2 = A'とすると
		//X = A' * (2p + 1)より、
		//X / A'の値は奇数となるはずである。
		//X / A'の値がすべて奇数であることを確かめる。
		//偶数の場合は答えは0となる。
		if ((X / A[i]) % 2 != 1) {
			cout << ans << endl;
			return 0;
		}
	}

	//M以下の値で、Xを偶数倍,奇数倍した数値は何個含まれるか。
	ans = M / X; //1X, 2X, 3X, 4X, 5X, 6X, 7X... <= M

	//M以下の値で、Xを奇数倍した数値は何個含まれるか。
	ans = (ans + 1) / 2; //1X, 3X, 5X, 7X, 9X, 11X... <= M

	cout << ans << endl;

	return 0;
}

