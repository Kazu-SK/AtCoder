
#include<iostream>


using namespace std;


int main() {

	int A = 0, B = 0;
	bool answer = false;


	cin >> A >> B;



	for (int i = A ; i <= B ; i++) {

		if (100 % i == 0)
			answer = true;
	}


	if (answer == true)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}