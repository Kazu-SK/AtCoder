#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	string S;

	cin >> S;


	int N = S.size();

	map<char, int> c_sum;
	vector<char> c_list;

	for (int i = 0; i < N; i++) {
		c_sum[S.at(i)] += 1;

		if (c_sum[S.at(i)] == 1)
			c_list.push_back(S.at(i));
	}


	long long total_com = 0;
	bool plus1 = false;


	total_com = (long long)N * (N - 1) / 2;

	for (int i = 0; i < c_list.size(); i++) {

		total_com -= (long long)c_sum[c_list[i]] * (c_sum[c_list[i]] - 1) / 2;

		if (c_sum[c_list[i]] > 1) {
			plus1 = true;
		}
	}

	if (plus1 == true) {
		total_com++;
	}

	cout << total_com << endl;


	return 0;
}

