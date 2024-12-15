#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;
	LL K = 0;


	cin >> N >> K;

	vector<int> A(N + 1);
	vector<int> A_count(N + 1, 0);
	vector<int> A_first_pos(N + 1, 0);

	bool search = true;
	int first_count = 0;
	int second_count = 0;


	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	LL pos = 1;
	LL move_count = 1;
	vector<int> current_pos;

	current_pos.push_back(1);
	A_count[1]++;

	while (move_count <= K) {

		current_pos.push_back(A[current_pos[current_pos.size() - 1]]);

		if (move_count == K) {
			cout << current_pos[move_count] << endl;
			return 0;
		}

		if (A_count[current_pos[move_count]] == 0) {
			A_count[current_pos[move_count]]++;
			A_first_pos[current_pos[move_count]] = move_count;
		}
		else {
			first_count = A_first_pos[current_pos[move_count]];
			second_count = move_count;
			break;
		}

		move_count++;
	}

	int ans_count = 0;

	K -= first_count;
	ans_count = K % (second_count - first_count);
	ans_count += first_count;

	cout << current_pos[ans_count] << endl;

	return 0;
}

