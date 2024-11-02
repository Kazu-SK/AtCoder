
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int R = 0, C = 0;


	cin >> R >> C;


	vector<vector<char>> B(R, vector<char>(C));
	vector<vector<bool>> Bom(R, vector<bool>(C, false));

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {

			if (B[i][j] == '.' && B[i][j] == '#')
				continue;

			int power = B[i][j] - '0';

			for (int ni = 0; ni < R; ni++) {
				for (int nj = 0; nj < C; nj++) {
					if (abs(ni - i) + abs(nj - j) <= power)Bom[ni][nj] = true;
				}
			}
		}
	}
	
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (Bom[i][j])
				B[i][j] = '.';

			cout << B[i][j];
		}
		cout << endl;
	}


	return 0;
}

