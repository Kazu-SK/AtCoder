
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> C(N + 1, 0);
    vector<vector<int>> A(N + 1);


    for (int i = 1; i <= N; i++) {


        cin >> C[i];

        for (int j = 0; j < C[i]; j++) {


            int c = 0;

            cin >> c;

            A[i].push_back(c);
        }
    }

    int X = 0;

    cin >> X;


    vector<int> ans;
    int C_min = 1000;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < A[i].size(); j++) {

            if (X == A[i][j]) {
                C_min = min(C_min, C[i]);
                break;
            }
        }
    }

    if (C_min == 1000) {
        cout << 0 << endl;
        return 0;
    }
    else {

        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < A[i].size(); j++) {

                if (C[i] > C_min)
                    break;

                if (X == A[i][j]) {
                    ans.push_back(i);
                    break;
                }
            }
        }

        cout << ans.size() << endl;

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
    }
    
    return 0;
}

