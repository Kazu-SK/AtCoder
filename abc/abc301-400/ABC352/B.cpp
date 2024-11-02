#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string S, T;


	cin >> S >> T;


	vector<int> answer(S.size(), 0);


	int S_i = 0;

	for (int T_i = 0; T_i < T.size(); T_i++) {

		if (T[T_i] == S[S_i]) {
			answer[S_i] = T_i + 1;
			S_i++;
		}

		if (S_i > S.size())
			break;
	}


	for (int ans_i = 0; ans_i < answer.size(); ans_i++) {
		cout << answer[ans_i] << " ";
	}


	return 0;
}

