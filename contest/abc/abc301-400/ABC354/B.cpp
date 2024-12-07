#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<string> S(N);
    vector<int> C(N, 0);
    int T = 0;


    for (int i = 0; i < N; i++) {
        cin >> S[i];
        cin >> C[i];

        T += C[i];
    }


    sort(S.begin(), S.end());


    for (int i = 0; i < N; i++) {
        if (i == T % N) {
            cout << S[i] << endl;
            break;
        }
    }




    return 0;
}

