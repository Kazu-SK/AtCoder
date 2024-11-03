
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;

    vector<int> H(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int arian_hand_count = 0;

    for (int i = 0; i < N; i++) {

        if (M - H[i] >= 0) {
            arian_hand_count++;
            M -= H[i];
        }
        else {
            break;
        }
    }

    cout << arian_hand_count << endl;


    return 0;
}

