
#include <iostream>
#include <vector>


using namespace std;

int main()
{

    int lu_black[][2] = { {0,0}, {0,1}, {0,2}, {1,0}, {1,1}, {1,2}, {2,0}, {2,1}, {2,2} };
    int lu_white[][2] = { {0,3}, {1,3}, {2,3}, {3,3}, {3,2}, {3,1}, {3,0} };
    int rd_black[][2] = { {0,0}, {0,-1},{0,-2},{-1,0},{-1,-1},{-1,-2},{-2,0},{-2,-1},{-2,-2} };
    int rd_white[][2] = { {0,-3},{-1,-3},{-2,-3},{-3,-3},{-3,-2},{-3,-1},{-3,0} };


    int N = 0;
    int M = 0;


    cin >> N >> M;

    vector<vector<char>> S(N + 1, vector<char>(M + 1));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> S[i][j];
        }
    }


    vector<int> ans_x;
    vector<int> ans_y;
    bool ans = true;

    for (int i = 1; i + 8 <= N; i++) {


        for (int j = 1; j + 8 <= M; j++) {

            //black
            int lu[2] = {0};
            int rd[2] = {0};

            lu[0] = i;
            lu[1] = j;

            rd[0] = i + 8;
            rd[1] = j + 8;

            ans = true;

            for (int lu_b = 0; lu_b < 9; lu_b++) {
                if (S[lu[0] + lu_black[lu_b][0]][lu[1] + lu_black[lu_b][1]] != '#') {
                    ans = false;
                }

                //cout << lu[0] + lu_black[lu_b][0] << '\t' << lu[1] + lu_black[lu_b][1] << '\t' << S[lu[0] + lu_black[lu_b][0]][lu[1] + lu_black[lu_b][1]] << endl;
            }
            
            //cout << ans << endl;

            for (int lu_w = 0; lu_w < 7; lu_w++) {
                if (S[lu[0] + lu_white[lu_w][0]][lu[1] + lu_white[lu_w][1]] != '.') {
                    ans = false;
                }

                //cout << lu[0] + lu_white[lu_w][0] << '\t' << lu[1] + lu_white[lu_w][1] << '\t' << S[lu[0] + lu_white[lu_w][0]][lu[1] + lu_white[lu_w][1]] << endl;
            }

            //cout << ans << endl;

            for (int rd_b = 0; rd_b < 9; rd_b++) {
                if (S[rd[0] + rd_black[rd_b][0]][rd[1] + rd_black[rd_b][1]] != '#') {
                    ans = false;
                }

                //cout << rd[0] + rd_black[rd_b][0] << '\t' << rd[1] + rd_black[rd_b][1] << '\t' << S[rd[0] + rd_black[rd_b][0]][rd[1] + rd_black[rd_b][1]] << endl;
            }

            //cout << ans << endl;

            for (int rd_w = 0; rd_w < 7; rd_w++) {
                if (S[rd[0] + rd_white[rd_w][0]][rd[1] + rd_white[rd_w][1]] != '.') {
                    ans = false;
                }

                //cout << rd[0] + rd_white[rd_w][0] << '\t' << rd[1] + rd_white[rd_w][1] << '\t' << S[rd[0] + rd_white[rd_w][0]][rd[1] + rd_white[rd_w][1]] << endl;
            }

            //cout << ans << endl << endl;

			if (ans == true) {
				ans_x.push_back(i);
				ans_y.push_back(j);
			}

        }
    }

    for (int i = 0; i < ans_x.size(); i++) {
        cout << ans_x[i] << " " << ans_y[i] << endl;
    }

    return 0;
}

