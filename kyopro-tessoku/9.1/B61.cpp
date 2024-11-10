#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;


    const int offset = 1;
    vector<int> A(M + offset);// , vector<int>(M + offset, 0));
    vector<int> B(M + offset);// , vector<int>(M + offset, 0));
    vector<vector<int>> combinate(N + offset);// , vector<int>(M + offset, 0));

    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 1; i <= M; i++) {
        combinate[A[i]].push_back(B[i]);
        combinate[B[i]].push_back(A[i]);
    }


    int max_friend_num = 0;
    int student_num_ans = 0;

    for (int i = 1; i <= N; i++) {

        if (max_friend_num < combinate[i].size()) {
            max_friend_num = combinate[i].size();
            student_num_ans = i;
        }
    }

    cout << student_num_ans << endl;



    return 0;
}

