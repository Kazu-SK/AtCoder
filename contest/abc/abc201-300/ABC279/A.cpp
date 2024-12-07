
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    string S;


    cin >> S;

    int answer = 0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'v')
            answer += 1;
        else
            answer += 2;
    }

    cout << answer << endl;

    return 0;
}

