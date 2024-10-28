
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0; 
    int M = 0;


    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);

    vector<vector<int>> Connect(N + 1);

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < M; i++) {
        Connect[A[i]].push_back(B[i]);
        Connect[B[i]].push_back(A[i]);
    }

    for (int i = 1; i <= N; i++) {

        sort(Connect[i].begin(), Connect[i].end());
        /*
        for (int j = 0; j < Connect[i].size(); j++) {
            cout << Connect[i][j] << " ";
        }
        cout << endl;
        */

        int size = Connect[i].size();

        Connect[i].insert(Connect[i].begin(), size);
    }

    for (int i = 1; i <= N; i++) {
		for (int j = 0; j < Connect[i].size(); j++) {
			cout << Connect[i][j] << " ";
		}
		cout << endl;
    }

    return 0;
}

