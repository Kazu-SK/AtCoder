
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int H = 0, X = 0;


    cin >> N >> H >> X;

    vector<int> P(N + 1, 0);


    for (int i = 1; i <= N; i++)
        cin >> P[i];


    for (int i = 1; i <= N; i++) {

        if (H + P[i] >= X) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

