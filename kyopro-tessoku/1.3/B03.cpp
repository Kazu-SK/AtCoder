
#include<iostream>

using namespace std;


int main(void) {

	int N = 0;
	int A[100] = { 0 };
	bool answer = false;

	cin >> N;

	for (int a_num = 0; a_num < N; a_num++)
		cin >> A[a_num];

	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N-1; j++) {
			for (int k = j+1; k < N; k++) {
				if (A[i] + A[j] + A[k] == 1000)
					answer = true;
			}
		}
	}
	
	if (answer == true)cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}