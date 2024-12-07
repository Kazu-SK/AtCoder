
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


int Pow(int x, int y) {

    int ans = 1;

    for (int i = 0; i < y; i++) {
        ans *= x;
    }

    return ans;
}

int main()
{
    int N = 0;
    int col = 0;
    int raw = 0;


    cin >> N;

	col = Pow(3, N);
	raw = col;

    vector<vector<char>> ans(raw, vector<char>(col,'#'));

    for (int k = 1; k <= N; k++) {

        int km0 = Pow(3, k);
	    int km1 = Pow(3, k - 1);

        if (k == 1) {
			col = km0;
			raw = col;

			for (int r = 0; r < raw; r++) {
			    for (int c = 0; c < col; c++) {
                    					
                    if (c == 1 && r == 1) {
                        ans[r][c] = '.';
                    }
                    else {
                        ans[r][c] = '#';
                    }
				}
			}
        }
        else {

            int sr = km1;
            int sc = 0;
            int km1_r = 0;
            int km1_c = 0;
            
            for (int m = 1; m <= 8; m++ ) {

                if (m % 3 == 0) {
                    sc += km1;
                }

                if (m >= 2) {
                    sr += km1;
                    sr %= km0;
                }

                km1_r = 0;

                for (int r = sr; r < sr + km1; r++) {
                    for (int c = sc; c < sc + km1; c++) {

                        if (m == 4) {
                            ans[r][c] = '.';
                        }
                        else {
                            ans[r][c] = ans[km1_r][km1_c];
                        }

                        km1_c++;
                    }
                    km1_c = 0;
                    km1_r++;
                }
            }

        }
    }

	col = Pow(3, N);
	raw = col;

	for (int i = 0; i < raw; i++) {
		for (int j = 0; j < col; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}

