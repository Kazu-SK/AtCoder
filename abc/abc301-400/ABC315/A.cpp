
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using LL = long long;

int main()
{
    string S;


    cin >> S;


    for (int i = 0; i < S.size(); i++) {

        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            continue;
        else
            cout << S[i];
    }


    return 0;
}

