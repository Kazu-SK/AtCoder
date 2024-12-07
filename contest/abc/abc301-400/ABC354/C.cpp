#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{

    int N = 0;


    cin >> N;

    map<int, int> card_AC;
    map<int, int> card_Ai;
    vector<int> ans;
    vector<int> A;


    for (int i = 1; i <= N; i++) {

        int a = 0;
        int c = 0;

        cin >> a >> c;

        card_Ai[a] = i;
        card_AC[a] = c;


        A.push_back(a);
    }


    sort(A.rbegin(), A.rend());

    int min_C = 10e9 + 1;

    for (int A_itr = 0; A_itr < A.size(); A_itr++) {

        if (card_AC[A[A_itr]] < min_C) {
            ans.push_back(card_Ai[A[A_itr]]);
            min_C = card_AC[A[A_itr]];
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

