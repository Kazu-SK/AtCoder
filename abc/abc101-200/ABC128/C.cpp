
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    int M = 0;


    cin >> N >> M;

    vector<int> k(M);
    vector<vector<int>> s(M);
    vector<int> p(M);


    for (int i = 0; i < M; i++) {
        cin >> k[i];

        for (int j = 0; j < k[i]; j++) {
            int s_num = 0;
            cin >> s_num;
            s_num--;
            s[i].push_back(s_num);
        }

        sort(s[i].begin(), s[i].end());
    }

    for (int i = 0; i < M; i++)
        cin >> p[i];

    int ans = 0;

	for (int num = 0; num < (1 << N) ; num++) {

        int light_on = 0;
	    
        for (int i = 0; i < M; i++) {

            int s_on = 0;
            int si_itr = 0;

			for (int bit = 0; bit < N ; bit++) {
				if ((num & (1 << bit)) && (bit == s[i][si_itr])) {
                    s_on++;
					si_itr++;

                    if (si_itr == s[i].size())
                        break;
				}
			}
            
            if (p[i] == s_on % 2) {
                light_on++;
            }
        }

        if (light_on == M) {
            cout << num << endl;
            ans++;
        }
	}

    cout << ans << endl;

    
    return 0;
}

