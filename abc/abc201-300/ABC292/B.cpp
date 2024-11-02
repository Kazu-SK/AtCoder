
#include <iostream>
#include <vector>
#include <map>

using namespace std;
using LL = long long;


int main()
{
    int N = 0; 
    int Q = 0;


    cin >> N >> Q;


    vector<vector<int>> player_list(N + 1, vector<int>(3, 0));

    vector<int> player(Q);
    vector<int> code(Q);

    for (int i = 0; i < Q; i++) {
        cin >> code[i] >> player[i];
    }

    const int YELLOW = 1;
    const int RED = 2;
    for (int i = 0; i < Q; i++) {

        if (code[i] == 3) {
            
            if (player_list[player[i]][YELLOW] >= 2 || player_list[player[i]][RED] >= 1) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            if (player_list[player[i]][YELLOW] < 2 && player_list[player[i]][RED] < 1) {
                player_list[player[i]][code[i]] += 1;
            }

            /*
			for (int i = 1; i <= N; i++) {
				cout << "player" << i << endl;
				for (int j = 1; j <= 2; j++) {
					cout << player_list[i][j] << "\t";
			   }
				cout << endl;
			}
            */
        }

    }



    return 0;
}

