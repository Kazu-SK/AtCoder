
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    string S;


    cin >> S;

    string ans;
    for (int i = 0; i < S.size(); i++) {
        ans += S[i] - 'a' + 'A';
    }

    cout << ans << endl;

    return 0;
}

