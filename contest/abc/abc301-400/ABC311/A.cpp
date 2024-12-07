
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<char> S(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }


    int A_count = 0;
    int B_count = 0;
    int C_count = 0;

    for (int i = 0; i < N; i++) {

        if (S[i] == 'A')
            A_count++;

        if (S[i] == 'B')
            B_count++;

        if (S[i] == 'C')
            C_count++;


        if (A_count >= 1 && B_count >= 1 && C_count >= 1){
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}

