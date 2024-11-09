#include<iostream>

using namespace std;



int main() {

	int N = 0;
	int K = 0;
	int answer = 0;
	int white = 0;


	cin >> N >> K;


	for (int red = 1; red <= N; red++) {
		for (int blue = 1; blue <= N; blue++) {

			white = K - red - blue;

			if (white <= N && white >= 1) {
				answer++;
			}
		}
	}

	cout << answer << endl;

	return 0;
}