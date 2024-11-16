
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
	string N;
	int count_num[11] = { 0 };


	cin >> N;

	for (int i = 0; i < N.size(); i++) {
		int num = 0;

		num = N[i] - '0';

		count_num[num]++;
	}

	if (count_num[1] == 1 && count_num[2] == 2 && count_num[3] == 3)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}

