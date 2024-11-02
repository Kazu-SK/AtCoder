
#include <iostream>
#include <vector>

using namespace std;

using LL = long long;

int main()
{
	int N = 0;


	cin >> N;

	int num2 = N % 5;

	if (num2 >= 3) {
		cout << N - (N % 5) + 5 << endl;
	}
	else {

		cout << N - (N % 5) << endl;
	}

	return 0;
}

