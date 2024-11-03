#include <iostream>
#include <vector>

using namespace std;

enum OPERATE_SELECT {
	CARD_INPUT_TOP = 1,
	CARD_INPUT_BOTTOM,
	CARD_SELECT
};

int main()
{
	int Q = 0;


	cin >> Q;


	vector<int> Yama;
	int t = 0;
	int x = 0;

	for (int i = 0; i < Q; i++) {
		cin >> t >> x;

		switch (t) {
			case CARD_INPUT_TOP:
				Yama.insert(Yama.begin(), x);
				break;
			case CARD_INPUT_BOTTOM:
				Yama.push_back(x);
				break;
			case CARD_SELECT:
				cout << Yama[x - 1] << endl;
				break;
		}
	}


	return 0;
}

