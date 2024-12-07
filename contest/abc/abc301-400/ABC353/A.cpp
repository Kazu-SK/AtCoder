#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int N = 0;


    cin >> N;

    vector<int> H(N + 1, 0);

    for (int i = 1; i <= N; i++)
        cin >> H[i];

    int high_building = -1;
    for (int i = 2; i <= N; i++) {
        if (H[1] < H[i]) {
            high_building = i;
            break;
        }
    }

    cout << high_building << endl;

    return 0;
}

