
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0;

    cin >> N;

    vector<char> S(N + 1);


    for (int i = 1; i <= N; i++)
        cin >> S[i];

    for (int i = 1; i <= N - 2; i++) {

        if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}

