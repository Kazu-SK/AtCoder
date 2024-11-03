#include <iostream>
#include <vector>


using namespace std;

using LL = long long;

int main()
{
	int Y = 0;


	cin >> Y;

	int ans = 0;

	if ((Y % 4 != 0) || (Y % 100 == 0 && Y % 400 != 0)) {
		ans = 365;
	}

	if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) {
		ans = 366;
	}

	cout << ans << endl;

	return 0;
}
