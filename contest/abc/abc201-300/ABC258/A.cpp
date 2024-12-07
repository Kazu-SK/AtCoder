
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using LL = long long;

int main()
{
    int K = 0;


    cin >> K;

    int ans[2] = { 0 };
    string S = "21:00";

    ans[0] = K % 60;
    ans[1] = K / 60;

    S[1] += char(ans[1]);
    S[3] += char(ans[0] / 10);
    S[4] += char(ans[0] % 10);

    cout << S << endl;
    

    return 0;
}

