#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{

    int N = 0;


    cin >> N;

    vector<int> A(N + 1, -1);
    vector<int> pos(N + 1, -1);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];

        pos[A[i]] = i;
    }

    int change_count = 0;
    vector<vector<int>> change(N + 1);

    for (int i = 1; i <= N; i++) {


        int position = 0;

        if (A[i] != i) {

            change_count++;
            position = pos[i];

            change[change_count].push_back(i);
            change[change_count].push_back(position);

            int tmp = 0;

            tmp = A[position];
            A[position] = A[i];
            A[i] = tmp;

            tmp = pos[A[position]];
            pos[A[position]] = pos[A[i]];
            pos[i] = tmp;
        }
    }

    cout << change_count << endl;

    for (int i = 1; i <= change_count; i++) {
        for (int j = 0; j < change[change_count].size(); j++) {
            cout << change[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

