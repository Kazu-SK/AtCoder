
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    int A = 0;
    int B = 0;

    int diff[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };

    cin >> N >> A >> B;


    vector<vector<char>> board(A * N, vector<char>(B * N));



	for (int i = 0; i < N; i++) {
		char wb;

		if (i % 2 == 0)wb = 'w';
		if (i % 2 == 1)wb = 'b';

		for (int j = 0; j < N; j++) {

			if (j >= 1 && wb == 'w') {
				wb = 'b';
			}
			else {
				if (j >= 1 && wb == 'b')
					wb = 'w';
			}

			for (int a = 0; a < A; a++) {
				for (int b = 0; b < B; b++) {
					if (wb == 'w') {
						board[A * i + a][B * j + b] = '.';
					}
					else {
						board[A * i + a][B * j + b] = '#';
					}

				}
			}

		}
	}


	for (int i = 0; i < A * N; i++) {
		for (int j = 0; j < B * N; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}


    return 0;
}

