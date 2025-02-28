#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
	int N = 0, M = 0;
	llong left = 0;
	llong right = 0;


	cin >> N >> M;


	vector<llong> L(N);

	for (int i = 0; i < N; i++)
		cin >> L[i];

	for (int i = 0; i < N; i++) {
		L[i] += 1; //L[i]の間に空白が入ることを想定
		left = max(left, L[i]);
		right += L[i];
	}

	left--; //L[i]の最大値が1行で収まった場合、最後が空白にならないので、空白の1文字分を減算
	right--; //L[i](0 <= i < N)が1行で収まった場合、最後が空白にならないので、空白の1文字分を減算

	left--; //https://qiita.com/hamko/items/794a92c456164dcc04ad　に従い、二分探索処理前にleftを1減算

	while (right - left > 1) {
		llong middle = (right + left) / 2;

		llong row = 1;
		llong col = 0;

		for (int i = 0; i < N; i++) {

			col += L[i];

			if(col > middle + 1){
				row++;
				col = L[i];
			}
		}

		if (row <= M) { //条件に収まっている場合はright=middle
			right = middle;
		}
		else {
			left = middle;
		}
	}

	cout << right << endl; //https://qiita.com/hamko/items/794a92c456164dcc04ad によれば、rightが答えになるらしい。


	return 0;
}

