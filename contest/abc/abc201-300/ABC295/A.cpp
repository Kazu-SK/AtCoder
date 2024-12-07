
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;


	vector<string> S(N);


	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}


	bool judge = false;

	for (int i = 0; i < N; i++) {
		if (S[i] == "and") {
			judge = true;
		}

		if (S[i] == "not") {
			judge = true;
		}

		if (S[i] == "that") {
			judge = true;
		}

		if (S[i] == "the") {
			judge = true;
		}

		if (S[i] == "you") {
			judge = true;
		}

		if (judge == true)
			break;
	}


	if (judge) 
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

