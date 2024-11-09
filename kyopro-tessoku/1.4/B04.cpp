
#include<iostream>

using namespace std;


int Pow(int n, int m) {
	int rtn_num = 1;


	for (int i = 0; i < m; i++) {
		rtn_num *= n;
	}

	return rtn_num;
}

int main() {

	int N = 0;
	int answer = 0;
	int num = 0;

	cin >> N;


	for (int i = 7; i >= 0; i--) {

		num = N / Pow(10, i);
		answer += (1 << i) * num;
		N = N - Pow(10, i) * num;
	}

	cout << answer << endl;

	return 0;
}