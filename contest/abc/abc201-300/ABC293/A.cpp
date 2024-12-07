
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	string S;


	cin >> S;


	for (int i = 0; i < S.size(); i = i + 2) {

		char s;

		s = S[i + 1];
		S[i + 1] = S[i];
		S[i] = s;
	}

	cout << S << endl;

	return 0;
}

