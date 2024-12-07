
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int s_count[26] = { 0 };
	//char s[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','l','o','p','q','r','s','t','u','v','w','x','y','z' };
	int max_count = 0;
	string S;


	cin >> S;


	for (int i = 0; i < S.size(); i++) {

		int s_itr = S[i] - 'a';

		s_count[s_itr]++;
		max_count = max(max_count, s_count[s_itr]);
	}


	int s_size = sizeof(s_count) / sizeof(int);
	char ans = 'a';

	//char ans2 = 34;

	for (int i = 0; i < s_size ; i++) {
		
		if (s_count[i] == max_count) {


			ans = 'a' + i;

			cout << ans << endl;
			//cout << 'a'+1 << endl;
			//cout << ans2 << endl;

			break;
		}
	}

	return 0;
}

