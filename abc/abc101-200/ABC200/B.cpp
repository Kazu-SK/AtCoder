
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL StoLL(string S) {

    LL ans = 0;
    LL num = 1;

    for (int i = S.size() - 1; i >= 0; i--) {
        ans += (S[i] - '0') * num;
        num *= 10;
    }

    return ans;
}

string LLtoS(LL N) {

    string ans;
    const LL NUM = 10;
    char s;

    while (N != 0) {
        
        s = (N % NUM) + '0';

        ans.insert(ans.begin(), s);

        N /= 10;
    }

    return ans;
}


int main()
{
    LL N = 0;
    int K = 0;

    const string S200 = "200";


    cin >> N >> K;


    for (int i = 1; i <= K; i++) {

        string S;

        if (N % 200 == 0) {
            N /= 200;
        }
        else {
            S = LLtoS(N);
            S += S200;
            N = StoLL(S);
        }
    }

    cout << N << endl;

    return 0;
}

