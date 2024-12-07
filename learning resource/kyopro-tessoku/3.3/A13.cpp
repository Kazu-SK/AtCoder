#include <iostream>
#include <vector>


using namespace std;

int main()
{
	int N = 0;
	int K = 0;


	cin >> N >> K;


	int offset = 1;
	vector<int> A(N + offset, 0);


	for (int i = 1; i <= N; i++)
		cin >> A[i];


	int comp_index = 0;
	int r_index = 0;
	long long ans = 0;
	vector<int> R(N, 0);

	for (int i = 1; i < N; i++) {

		if (i == 1)
			r_index = i + 1;
		else
			if (r_index == i)
				r_index = i + 1;

		comp_index = r_index;
		R[i] = r_index - i - 1;

		//cout << "i = " << i << endl;
		while (A[comp_index] - A[i] <= K) {

			//cout << "A[" << i << "]=" << A[i] << "\tA[" << comp_index << "]=" << A[comp_index] << endl;
			R[i]++;
			r_index = comp_index;

			if (comp_index != N)
				comp_index++;
			else
				break;
		}
	}

	for (int i = 1; i < N; i++)
		ans += R[i];

	cout << ans << endl;

	return 0;
}

