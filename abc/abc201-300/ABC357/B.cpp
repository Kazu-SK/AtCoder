
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string S;


    cin >> S;


    int S_count = 0;
    int s_count = 0;

    for (int i = 0; i < S.size(); i++) {

        if ('A' <= S[i] && S[i] <= 'Z')S_count++;
        if ('a' <= S[i] && S[i] <= 'z')s_count++;
    }


    if (S_count > s_count) {
        transform(S.begin(), S.end(), S.begin(), ::toupper);
    }
    else {
        transform(S.begin(), S.end(), S.begin(), ::tolower);
    }


    cout << S << endl;

    return 0;
}

