
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    char s1[4] = { 'H', 'D', 'C', 'S' };
    char s2[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    map<string, bool> Map;


    cin >> N;


    vector<string> S(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    bool judge[3] = { false };
    bool answer = false;

    for (int S_itr = 0; S_itr < N; S_itr++) {

        for (int j = 0; j < 3; j++)
            judge[j] = false;


        for (int S_moji = 0; S_moji < 2; S_moji++) {
			if (S_moji == 0) {

				for (int s1_itr = 0; s1_itr < sizeof(s1); s1_itr++) {
					if (S[S_itr][S_moji] == s1[s1_itr]) {
						judge[S_moji] = true;
						break;
					}
				}
			}
            else {
				for (int s2_itr = 0; s2_itr < sizeof(s2); s2_itr++) {
					if (S[S_itr][S_moji] == s2[s2_itr]) {
						judge[S_moji] = true;
						break;
					}
				}

            }
        }

        if (Map[S[S_itr]] == false) {
            Map[S[S_itr]] = true;
            judge[2] = true;
        }
        else {
            judge[2] = false;
        }

        if (judge[0] == true && judge[1] == true && judge[2] == true) {
            answer = true;
        }
        else {
            answer = false;
            break;
        }

    }


    if (answer)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

