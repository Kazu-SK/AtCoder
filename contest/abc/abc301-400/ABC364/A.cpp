
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<string> S(N);


    for (int i = 0; i < N; i++)
        cin >> S[i];


    for (int i = 1; i < N - 1; i++) {
        if (S[i - 1] == S[i] && S[i] == "sweet") {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

