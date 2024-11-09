
#include<iostream>


using namespace std;


int main() {

	int N, X;


	cin >> N >> X;


	int A[100] = { 0 };

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}


	bool answer = false;


	for (int i = 0; i < N; i++) {
		if (A[i] == X) {
			answer = true;
		}
	}

	if (answer == true)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}