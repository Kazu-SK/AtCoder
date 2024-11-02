
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main() {

	int N = 0;


	cin >> N;

	if (N >= 1e3 && N <= 1e4 - 1) {
		N -= N % 10;
	}

	if (N >= 1e4 && N <= 1e5 - 1) {
		N -= N % 100;
	}

	if (N >= 1e5 && N <= 1e6 - 1) {
		N -= N % 1000;
	}

	if (N >= 1e6 && N <= 1e7 - 1) {
		N -= N % 10000;
	}

	if (N >= 1e7 && N <= 1e8 - 1) {
		N -= N % 100000;
	}

	if (N >= 1e8 && N <= 1e9 - 1) {
		N -= N % 1000000;
	}

	cout << N << endl;

	return 0;
}

