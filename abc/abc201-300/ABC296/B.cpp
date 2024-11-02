#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	char S[8][8];

	int ast_i = 0;
	int ast_j = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> S[i][j];

			if (S[i][j] == '*') {
				ast_i = i;
				ast_j = j;
			}
		}
	}

	char row_code[8] = { '1', '2', '3', '4', '5', '6', '7', '8' };
	char col_code[8] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };


	cout << col_code[ast_j] << row_code[7 - ast_i];


	return 0;
}

