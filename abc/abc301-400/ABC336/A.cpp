
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;


	cin >> N;


	for (int i = 0; i < N + 3; i++) {

		if (i == 0) {
			cout << 'L';
		}
		else if (i == N + 1) {
			cout << 'n';
		}
		else if (i == N + 2) {
			cout << 'g';
		}
		else {
			cout << 'o';
		}
	}

	return 0;
}

