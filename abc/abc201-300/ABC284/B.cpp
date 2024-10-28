
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int T = 0;

    cin >> T;


    vector<vector<int>> A(T);
    vector<int> N(T);


    for (int i = 0; i < T; i++) {

        cin >> N[i];

        for (int j = 0; j < N[i]; j++) {
            int num = 0;

            cin >> num;
            A[i].push_back(num);
        }
    }
    

    for (int i = 0; i < T; i++) {

        int ans_count = 0;
        ans_count = 0;

        for (int j = 0; j < A[i].size(); j++) {
            
            if (A[i][j] % 2 == 1) {
                ans_count++;
            }
        }

        cout << ans_count << endl;
    }

    return 0;
}
