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
	int N = 0;


	cin >> N;


	vector<int> T(N);
	vector<int> V(N);

	for (int i = 0; i < N; i++) {
		cin >> T[i];
		cin >> V[i];
	}


	int water = 1;
	int t_itr = 0;

	for (int t = T[0]; t <= T[N - 1]; t++) {

		if(water > 0)
			water--;

		if (t == T[t_itr]) {
			water += V[t_itr];
			t_itr++;
		}
	}

	cout << water << endl;

	return 0;
}

