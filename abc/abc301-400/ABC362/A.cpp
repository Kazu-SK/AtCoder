#include <iostream>
#include <vector>

using namespace std;

int main()
{

	string c_RGB[3] = { "Red", "Green", "Blue" };
	string C;

	int p_RGB[3];


	for (int i = 0; i < 3; i++) {
		cin >> p_RGB[i];
	}

	cin >> C;


	int answer_price = 1000;

	for (int i = 0; i < 3; i++) {

		if (C != c_RGB[i]) {
			answer_price = min(answer_price, p_RGB[i]);
		}
	}

	cout << answer_price << endl;

	return 0;
}

