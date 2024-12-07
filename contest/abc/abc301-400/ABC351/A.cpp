#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> A(9, 0);
	vector<int> B(8, 0);

	int A_sum = 0;
	int B_sum = 0;


	for (int i = 0; i < 9; i++) {
		cin >> A[i];
		A_sum += A[i];
	}

	for (int i = 0; i < 8; i++) {
		cin >> B[i];
		B_sum += B[i];
	}


	cout << A_sum - B_sum + 1 << endl;



	return 0;
}

