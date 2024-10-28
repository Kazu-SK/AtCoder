
#include <iostream>


using namespace std;

int main()
{
	int A = 0, B = 0;
	int D = 0;


	cin >> A >> B >> D;

	int num = A;

	while (num <= B) {

		cout << num << " ";
		num += D;
	}

	return 0;
}

