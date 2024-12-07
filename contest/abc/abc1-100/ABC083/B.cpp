
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;


int DigitSum(int calc_n) { //入力された値の桁の合計値を返す。

	int sum = 0;

	while (calc_n > 0) { //全桁をの値を調べるまでループする。
		sum += calc_n % 10;
		calc_n /= 10; //十の位の値を一の位に移動する。
	}

	return sum;
}

int main()
{
	int N = 0;
	int A = 0;
	int B = 0;


	cin >> N >> A >> B;


	int answer = 0;
	int sum = 0;

	for (int n = 1; n <= N; n++) {

		sum = DigitSum(n);

		if (sum >= A && sum <= B) {
			answer += n;
		}
	}
	
	cout << answer << endl;

	return 0;
}

