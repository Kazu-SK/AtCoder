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
	int M = 0;


	cin >> M;


	vector<LL> d(M);
	vector<LL> c(M);


	for (int i = 0; i < M; i++) {
		cin >> d[i] >> c[i];
	}

	LL keta = 0;
	LL s = 0;

	for (int i = 0; i < M; i++) {

		keta += c[i];
		s += d[i] * c[i];
	}

	cout << (keta - 1) + (s - 1) / 9 << endl;


	return 0;
}

