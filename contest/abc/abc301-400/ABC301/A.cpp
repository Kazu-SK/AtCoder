
#include <iostream>
#include <vector>

using namespace std;

using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<char> S(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }


    int T_count = 0;
    int A_count = 0;
    int T_win_i = 0;
    int A_win_i = 0;


    for (int i = 0; i < N; i++) {
        if (S[i] == 'T') {
            T_count++;
            T_win_i = i;
        }
        else {
            A_count++;
            A_win_i = i;
        }
    }

    if (T_count > A_count) {
        cout << 'T';
    }
    else if (T_count < A_count) {
        cout << 'A';
    }
    else if(T_win_i < A_win_i){
        cout << 'T';
    }
    else if(T_win_i > A_win_i){
        cout << 'A';
    }
    else {
    }

    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<char> S(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }


    int T_count = 0;
    int A_count = 0;
    int T_win_i = 0;
    int A_win_i = 0;


    for (int i = 0; i < N; i++) {
        if (S[i] == 'T') {
            T_count++;
            T_win_i = i;
        }
        else {
            A_count++;
            A_win_i = i;
        }
    }

    if (T_count > A_count) {
        cout << 'T';
    }
    else if (T_count < A_count) {
        cout << 'A';
    }
    else if(T_win_i < A_win_i){
        cout << 'T';
    }
    else if(T_win_i > A_win_i){
        cout << 'A';
    }
    else {
    }

    return 0;
}

