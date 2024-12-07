
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<string> S(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int for_count = 0;
    int age_count = 0;
    for (int i = 0; i < N; i++) {

        if (S[i] == "For") {
            for_count++;
        }

        if (S[i] == "Against") {
            age_count++;
        }
    }


    if (for_count > age_count) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

