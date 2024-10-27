
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	char s[3];

	for (int i = 0; i < 3; i++)
		cin >> s[i];

	int ans = 0;
	for (int i = 0; i < 3; i++)
		if (s[i] == '1')
			ans++;

	cout << ans << endl;

	return 0;
}

