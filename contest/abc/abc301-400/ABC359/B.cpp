#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> A(N * 2, 0);

    for (int i = 0; i < N * 2; i++) {
        cin >> A[i];
    }


    int answer_count = 0;

    for (int i = 2; i < N * 2; i++) {
        if (A[i] == A[i - 2]) {
            answer_count++;
        }
    }

    cout << answer_count << endl;

    return 0;
}

