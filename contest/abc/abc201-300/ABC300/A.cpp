
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    int A = 0;
    int B = 0;


    cin >> N >> A >> B;


    int ans = A + B;

    vector<int> C(N);

    for (int i = 0; i < N; i++)
        cin >> C[i];

    for (int i = 0; i < N; i++) {
        if (C[i] == ans) {
            cout << i + 1 << endl;
            break;
        }
    }
     


    return 0;
}

