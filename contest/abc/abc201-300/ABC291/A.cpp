#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	string S;


	cin >> S;



	for (int i = 0; i < S.size(); i++) {

		char s = S[i] - 'A';

		if (s >= 0 && s <= 25) {
			cout << i + 1 << endl;
			break;
		}
	}

	return 0;
}

