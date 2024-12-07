#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string S, T;


	cin >> S >> T;


	int j = 0;
	int ok = 0;
	vector<char> c;

	vector<int> w;
	bool judge = false;


	for (int w = 1; w < S.size(); w++) {

		for (int c = 1; c <= w; c++) {

			string now = "";

			for (int i = c - 1; i < S.size(); i = i + w) {
				now += S[i];
			}

			if (T == now) {
				judge = true;
				break;
			}
		}
	}

	if (judge == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}

