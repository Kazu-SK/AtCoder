#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
	int N = 0, T = 0, A = 0;


	cin >> N >> T >> A;

	int last = N - T - A;
	int diff = abs(T - A);


	if (last < diff) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}

