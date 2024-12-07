#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	long long N = 0;
	long long long_num = 0;
	string s_num;

	cin >> N;


	long long answer = 0;
	bool palindrome_decision = true;

	for (long long i = 1; i <= 1000000; i++) {

		long_num = i * i * i;

		if (long_num > N)
			break;

		s_num = to_string(long_num);


		palindrome_decision = true;

		for (int j = 0; j < s_num.size(); j++) {

			int bottom_digit = s_num.size() - j - 1;
			int top_digit = j;

			if (bottom_digit <= top_digit)
				break;

			if (s_num[bottom_digit] != s_num[top_digit]) {
				palindrome_decision = false;
				break;
			}
		}

		if (palindrome_decision == true) {
			answer = long_num;
		}

	}

	cout << answer << endl;

	return 0;
}

