
#include <iostream>
#include <vector>


using namespace std;

int main()
{
	string S;


	cin >> S;


	int dot_num = 0;
	string ans_S;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '.') {
			dot_num = i;
		}
	}

	dot_num++;
	ans_S = S.substr(dot_num);

	cout << ans_S << endl;


	return 0;
}

