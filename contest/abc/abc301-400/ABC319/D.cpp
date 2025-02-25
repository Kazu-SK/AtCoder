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
	int N = 0, M = 0;
	LL left = 0;
	LL right = 0;

	cin >> N >> M;


	vector<LL> L(N);

	for (int i = 0; i < N; i++)
		cin >> L[i];

	for (int i = 0; i < N; i++) {
		L[i] += 1;
		left = max(left, L[i]) - 1;
		right += L[i];
	}

	right -= 1;

	while (right - left > 1) {
		LL middle = left + (right - left) / 2;
		//LL middle = (right + left) / 2;

		LL row = 1;
		LL col = 0;

		for (int i = 0; i < N; i++) {

			col += L[i];

			if(col > middle + 1){
				row++;
				col = L[i];
			}
		}

		if (row <= M) {
			right = middle;
		}
		else {
			left = middle;
		}
	}

	cout << right << endl;


	return 0;
}

