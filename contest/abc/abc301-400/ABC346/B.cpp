#include <iostream>

using namespace std;

int main()
{

	string PIANO_S = "wbwbwwbwbwbw";
	string piano;

	int W = 0, B = 0;


	cin >> W >> B;


	while (piano.size() <= W + B) {
		piano += PIANO_S;
	}

	piano += PIANO_S;

	if (W == 0 && B == 0) {
		cout << "No" << endl;
		return 0;
	}

	int w_count = 0;
	int b_count = 0;
	int ans_judge = false;
	int length = W + B;

	for (int i = 0; i + length - 1 <= piano.size(); i++) {

		w_count = 0;
		b_count = 0;

		for (int j = i; j <= i + length - 1; j++) {

			if (piano[j] == 'w') {
				w_count++;
			}
			else if (piano[j] == 'b') {
				b_count++;
			}
			else {
			}
		}

		if (w_count == W && b_count == B) {
			ans_judge = true;
			break;
		}

	}

	if (ans_judge == true)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

