
#include <iostream>
#include <vector>

using namespace std;

using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<char> S(N);
    vector<char> T(N);


    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    int judge_count = 0;
    for (int i = 0; i < N; i++) {
        
        if (S[i] == T[i])
            judge_count++;

        if ((S[i] == '0' && T[i] == 'o') || (S[i] == 'o' && T[i] == '0'))
            judge_count++;

        if ((S[i] == '1' && T[i] == 'l') || (S[i] == 'l' && T[i] == '1'))
            judge_count++;
    }


    if (judge_count == N)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

