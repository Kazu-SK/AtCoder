
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL BaseKto10(int k, string n) {

    LL ans = 0;

    int n_str = n.size() - 1;
    LL n_keta = 1;

    while (n_str >= 0) {
        ans += (n[n_str] - '0') * n_keta;
        n_keta *= k;
        n_str--;
    }

    return ans;
}


int main()
{
    int K = 0;
    string A, B;


    cin >> K;
    cin >> A >> B;


    LL ans_A = 0;
    LL ans_B = 0;


    ans_A = BaseKto10(K, A);
    ans_B = BaseKto10(K, B);


    cout << ans_A * ans_B << endl;


    return 0;
}

