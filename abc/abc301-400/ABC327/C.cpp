#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main()
{
	vector<vector<int>> A(10, vector<int>(10));

	//int row_sum[10] = { 0 };
	//int col_sum[10] = { 0 };
	//int group_sum[10] = { 0 };

	bool row_judge = true;
	bool col_judge = true;
	bool group_judge = true;

	map<int, int> Map;

	const int ANS_SUM = 45;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> A[i][j];
		}
	}

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			Map[A[i][j]]++;

			if (Map[A[i][j]] >= 2) {
				row_judge = false;
			}

		}

		Map.clear();
	}

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {

			Map[A[j][i]]++;

			if (Map[A[j][i]] >= 2) {
				col_judge = false;
			}
		}

		Map.clear();
	}

	int group_sum_itr = 1;

	for (int row_offset = 1; row_offset <= 9; row_offset += 3) {
		for (int col_offset = 1; col_offset <= 9; col_offset += 3) {
			for (int i = 0; i <= 2; i++) {
				for (int j = 0; j <= 2; j++) {
					Map[A[row_offset + i][col_offset + j]]++;

					if (Map[A[row_offset + i][col_offset + j]] >= 2) {
						group_judge = false;
					}
				}
			}

			Map.clear();

			group_sum_itr++;

		}
	}


	if (row_judge == true && col_judge == true && group_judge == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;

}

