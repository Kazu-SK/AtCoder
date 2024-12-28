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
	int K = 0;
	string S, T;
	int false_count = 0;
	vector<int> false_pos;

	int T_count[26] = { 0 };
	int S_count[26] = { 0 };


	cin >> K;
	cin >> S >> T;

	int S_size = S.size();
	int T_size = T.size();
	int min_size = min(S_size, T_size);

	if (S == T) {
		cout << "Yes" << endl;
		return 0;
	}

	if (abs(S_size - T_size) > 1) {
		cout << "No" << endl;
		return 0;
	}

	if (S_size > T_size) {
		for (int i = 0; i < min_size; i++) {
			if (S[i] != T[i]) {
				S.erase(S.begin() + i);
				break;
			}
		}
		if (S.size() != T.size()) {
			S.pop_back();
		}
	}
	else {
		if (S_size == T_size) {
			for (int i = 0; i < min_size; i++) {
				if (S[i] != T[i]) {
					S[i] = T[i];
					break;
				}
			}
		}
		else {
			for (int i = 0; i < min_size; i++) {
				if (S[i] != T[i]) {
					S.insert(S.begin() + i, T[i]);
					break;
				}
			}

			if (S.size() != T.size()) {
				S.push_back(T[T.size() - 1]);
			}
		}
	}

	/*
	cout << "S = " << S << endl;
	cout << "T = " << T << endl;
	*/

	if (S == T)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}

