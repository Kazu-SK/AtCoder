
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0;
    int M = 0;


    cin >> N >> M;

    vector<char> S(N + 1);
    vector<char> T(M + 1);


    bool prefix = true;
    bool suffix = true;

    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }

    for (int i = 1; i <= M; i++) {
        cin >> T[i];
    }


    for (int i = 1; i <= N; i++) {
        if (S[i] != T[i])
            prefix = false;
    }


    int k = 1;
    for (int i = M - N + 1; i <= M; i++) {
        if (S[k] != T[i])
            suffix = false;

        k++;
    }

    if (prefix == true && suffix == true)
        cout << 0 << endl;

    if (prefix == true && suffix == false)
        cout << 1 << endl;

    if (prefix == false && suffix == true)
        cout << 2 << endl;

    if (prefix == false && suffix == false)
        cout << 3 << endl;

    return 0;
}

