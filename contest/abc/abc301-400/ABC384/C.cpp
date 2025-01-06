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

bool my_compare(pair<int, string> a, pair<int, string> b) {
	if (a.first != b.first) {
		return a.first > b.first;
	}

	if (a.second != b.second) {
		return a.second < b.second;
	}
	else {
		return true;
	}
}

int main()
{
	int abcde[5];
	string parts = "ABCDE";

	vector<pair<int, string>> p_list;
	pair<int, string> p;

	for (int i = 0; i < 5; i++) {
		cin >> abcde[i];
	}

	int sum = 0;
	for (int pattern = 0; pattern < (1 << 5); pattern++) {

		sum = 0;
		string name;

		for (int bit = 0; bit < 5; bit++) {

			if (pattern & (1 << bit)) {
				sum += abcde[bit];
				name += parts[bit];
			}
		}

		p.first = sum;
		p.second = name;

		p_list.push_back(p);
	}

	sort(p_list.begin(), p_list.end(), my_compare);

	for (int i = 0; i < 32; i++) {
		cout << p_list[i].second << endl;
	}

	return 0;
}

