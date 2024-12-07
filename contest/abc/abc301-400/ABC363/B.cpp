#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, T = 0, P = 0;
    int p_count = 0;
    int ans_day = 0;

    cin >> N >> T >> P;

    vector<int> L(N, 0);


    for (int i = 0; i < N; i++) {
        cin >> L[i];

        if (L[i] >= T) {
            p_count++;
        }
    }

    if (p_count >= P) {
        cout << ans_day << endl;
        return 0;
    }

    while (p_count < P) {

        p_count = 0;
        ans_day++;

        for (int i = 0; i < N; i++) {
            L[i] += 1;

            if (L[i] >= T) {
                p_count++;
            }
        }
    }

    cout << ans_day << endl;


    return 0;
}

