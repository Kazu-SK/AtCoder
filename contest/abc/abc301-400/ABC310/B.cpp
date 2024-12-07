
#include <iostream>
#include <vector>


using namespace std;

bool Judge(int i, int j, vector<int> P, vector<int> C, vector<vector<int>> F) {

	bool judge[3] = { false };

	if (P[i] >= P[j])
		judge[0] = true;

	int i_size = F[i].size();
	int j_size = F[j].size();
	int count = 0;

	for (int n = 0; n < F[i].size(); n++) {
		for (int m = 0; m < F[j].size(); m++) {
			if (F[i][n] == F[j][m]) {
				count++;
				break;
			}
		}
	}

	if (count == F[i].size()) {
		judge[1] = true;
	}

	if (P[i] > P[j] || (count == F[i].size() && F[i].size() < F[j].size())) {
		judge[2] = true;
	}

	if (judge[0] == true && judge[1] == true && judge[2] == true) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
    int N = 0;
    int M = 0;


    cin >> N >> M;


    vector<int> P(N, 0);
    vector<int> C(N, 0);

    vector<vector<int>> F(N);


    for (int i = 0; i < N; i++) {
        cin >> P[i] >> C[i];

        for (int j = 0; j < C[i]; j++) {

            int c;
            cin >> c;

            F[i].push_back(c);
        }
    }


    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {

			bool ans[2] = { false };

			ans[0] = Judge(i, j, P, C, F);
			ans[1] = Judge(j, i, P, C, F);

			if (ans[0] == true || ans[1] == true) {
				cout << "Yes" << endl;
				return 0;
			}

        }

    }

    cout << "No" << endl;

    return 0;
}

