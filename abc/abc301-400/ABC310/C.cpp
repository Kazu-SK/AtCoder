
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

string reverse(string s) {

    string ans_s;

    for (int i = s.size() - 1; i >= 0; i--) {
        ans_s.push_back(s[i]);
    }

    return ans_s;
}

int main()
{
    int N = 0;

    map<string, bool> same_Map;
    set<string> S_set;


    cin >> N;


    vector<string> S(N);


    int same_num = 0;

    for (int i = 0; i < N; i++) {
        string rev_S;

        cin >> S[i];

	    rev_S = reverse(S[i]);

        if (S[i] != rev_S) {

			S_set.insert(rev_S);
			S_set.insert(S[i]);
        }
        else {

            if (same_Map[S[i]] == false) {
                same_Map[S[i]] = true;
				S_set.insert(S[i]);
				same_num++;
            }
            else {
            }
        }
    }

    int ans = (S_set.size() + same_num) / 2;

    cout << ans << endl;

    return 0;
}

