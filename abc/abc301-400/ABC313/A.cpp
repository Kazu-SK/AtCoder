
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> P(N + 1, 0);


    int x = 0;

    for (int i = 1; i <= N; i++) {
        cin >> P[i];

        x = max(x, P[i]);
    }

    int y = 100000;
    for (int i = 2; i <= N; i++) {
        y = min(y, P[1] - P[i]);
    }

    int ans = 0;

    //cout << "y = " << y << endl;

    if (x == P[1] && y > 0) {
        ans = 0;
    }
    else {
        ans =  abs(x - P[1]) + 1;
    }

    cout << ans << endl;


    return 0;
}

