
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> H(N);


    for (int i = 0; i < N; i++)
        cin >> H[i];

    int pos = 0;


    for (int i = 1; i < N; i++) {

        if (H[pos] < H[i]) {
            pos = i;
        }
        else {
            break;
        }
    }

    cout << H[pos] << endl;

    return 0;
}

