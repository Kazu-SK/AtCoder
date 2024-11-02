
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int D = 0;


    cin >> N >> D;

    vector<string> S(N);


    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int ans = 0;
    int count = 0;
    int combo = 0;

    for (int i = 0; i < D; i++) {

        count = 0;

        for (int j = 0; j < N; j++) {
            if (S[j][i] == 'o')
                count++;
        }

        if (count == N) {
            combo++;
            ans = max(ans, combo);
        }
        else {
            combo = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
