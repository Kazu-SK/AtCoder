#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    int offset = 1;
    vector<int> A(N + offset, 0);
    vector<int> B(N + offset, 0);
    vector<int> DP(N + offset, 0);
    vector<int> Answer_Root;

    const int A_root_start = 2;
    const int B_root_start = 3;

    for (int i = A_root_start; i <= N; i++)
        cin >> A[i];

    for (int i = B_root_start; i <= N; i++)
        cin >> B[i];


    for (int i = 1; i <= 2; i++) {
        DP[i] = DP[i - 1] + A[i];
    }

    for (int i = 3; i <= N; i++) {
        DP[i] = min(DP[i - 1] + A[i], DP[i - 2] + B[i]);
    }

    int min_answer = N;
    Answer_Root.push_back(min_answer);

    int A_root = 0;
    int B_root = 0;

    while (min_answer > 2) {

        A_root = DP[min_answer - 1] + A[min_answer];
        B_root = DP[min_answer - 2] + B[min_answer];

        if (A_root < B_root)
            min_answer = min_answer - 1;
        else
            min_answer = min_answer - 2;

        Answer_Root.push_back(min_answer);
    }

    if (Answer_Root.back() != 1)
        Answer_Root.push_back(1);

    reverse(Answer_Root.begin(), Answer_Root.end());


    cout << Answer_Root.size() << endl;

    for (int i = 0; i < Answer_Root.size(); i++)
        cout << Answer_Root[i] << " ";

    return 0;
}

