#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<char> S(N);


    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    bool ans_judge = false;

    for (int i = 1; i < N; i++) {

        int a_num = S[i] - 'a';
        int b_num = S[i - 1] - 'a';

        if ((a_num == 0 && b_num == 1) || (a_num == 1 && b_num == 0)) {
            ans_judge = true;
            break;
        }
    }

    if (ans_judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

