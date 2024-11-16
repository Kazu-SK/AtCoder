
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
	string S;


	cin >> S;


	vector<int> A;


	int A_num = 0;

	for (int i = 1; i < S.size(); i++) {
		if (S[i] == '-') {
			A_num++;
		}
		else {
			if (S[i] == '|') {
				A.push_back(A_num);
				A_num = 0;
			}
		}
	}

	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}


	return 0;
}

