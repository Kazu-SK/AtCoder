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
	string S;
	int num[2];


	cin >> S;

	num[0] = S[0] - '0';
	num[1] = S[2] - '0';

	cout << num[0] * num[1] << endl;

	return 0;
}

