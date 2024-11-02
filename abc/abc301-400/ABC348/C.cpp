#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;

int main()
{
	int N = 0;

	cin >> N;


	vector<int> A(N, 0);
	vector<int> C(N, 0);

	map<int, int> Map;

	for (int i = 0; i < N; i++) {

		cin >> A[i] >> C[i];

		if (Map[C[i]] == 0) {
			Map[C[i]] = A[i];
		}
		else {
			Map[C[i]] = min(Map[C[i]], A[i]);
		}
	}

	int answer = 0;
	for (const auto& item : Map) {
		answer = max(answer, item.second);
	}

	cout << answer << endl;
}

