#include<iostream>

using namespace std;



int main() {

	int N = 0;
	int bin[10] = { 0 };
	int i = 0;

	cin >> N;


	for (i = 0; N >1 ; i++) {

		bin[i] = N % 2;
		N = N / 2;
	}

	bin[i] = N;

	for (int j = 9 ; j >= 0; j--) {
		cout << bin[j];
	}

	return 0;
}