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
	int N = 0;


	cin >> N;

	vector<vector<char>> Grid(N + 1, vector<char>(N + 1));
	char word;
	int limit = 0;
	int i_range = 0;

	if (N % 2 == 1) {
		i_range = N / 2 + 1;
	}
	else {
		i_range = N / 2;
	}

	for (int i = 1; i <= i_range; i++) {
		if (i % 2 == 1) {
			word = '#';
		}
		else {
			word = '.';
		}

		for (int row = 1 + limit; row <= N - limit; row++) {
			for (int col = 1 + limit ; col <= N - limit; col++) {
				Grid[row][col] = word;
			}
		}

		limit++;
	}


	for (int row = 1; row <= N; row++) {
		for (int col = 1; col <= N; col++) {
			cout << Grid[row][col];
		}
		cout << endl;
	}

	return 0;
}

