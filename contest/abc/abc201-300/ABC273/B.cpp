#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

/********

非負整数xをn桁目以下で四者五入した値を返す。 n >= 1とする。
桁あふれに注意する。

long long = -9,223,372,036,854,775,808 から 9,223,372,036,854,775,807
unsigned long long = 0 ～ 18,446,744,073,709,551,615

********/


LL RoundingOff(LL x, int n) { //非負整数xをn桁目で四者五入した値を返す。 n >= 1とする。

    LL num = 1;
    LL ans = x;
    vector<char> x_s;
    int keta = 0;


    for (int i = 1; i <= n; i++) {
        num *= 10;
    }

    while (x > 0) {
        x_s.push_back((x % 10) + '0');
        keta++;
        x /= 10;
    }

    if (keta < n) //xの桁数より大きな桁数nで四者五入しようとした場合は、0を返す。
        return 0;

    if (x_s[n - 1] - '0' >= 5) {
        ans += num;
    }

    ans -= ans % num;

    return ans;
}

int main()
{
    LL X;
    int K = 0;


    cin >> X >> K;


    int num = 1;

    for (int i = 1; i <= K; i++) {
        X = RoundingOff(X, i);
    }

    cout << X << endl;

    return 0;
}



