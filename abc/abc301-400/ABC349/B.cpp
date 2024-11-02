#include <iostream>
#include <vector>

#include <map>

using namespace std;

int main()
{
	string S;

	map<char, int> Map;


	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		Map[S[i]] += 1;
	}

	int loop = 1;
	int S_size = S.size();

	while (S_size > 0 && loop <= S.size()) {

		int kinds = 0;

		auto itr = Map.begin();
		while (itr != Map.end()) {

			if (loop == itr->second) {
				kinds++;
			}

			itr++;
		}

		if (kinds != 0 && kinds != 2) {
			cout << "No" << endl;
			return 0;
		}
		else {
			S_size -= loop * kinds;
		}

		loop++;


	}

	cout << "Yes" << endl;

	return 0;
}

