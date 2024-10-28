
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    string S;


    cin >> S;

    int answer = -1;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'a') {
            answer = i + 1;
        }
    }

    cout << answer << endl;

    return 0;
}

