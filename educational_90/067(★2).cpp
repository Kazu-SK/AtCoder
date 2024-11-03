#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

LL Base8to10(string n) {

    LL ans = 0;

    int n_str = n.size() - 1;
    LL n_keta = 1;

    while (n_str >= 0) {
        ans += (n[n_str] - '0') * n_keta;
        n_keta *= 8;
        n_str--;
    }

    return ans;
}

string Base10to9(LL n) {

    string ans;
    char s;

    if (n == 0) {
        ans = '0';
    }

    while (n) {

        s = (n % 9) + '0';
        n /= 9;

        ans.insert(ans.begin(), s);
    }

    return ans;
}

int main()
{
    string N;
    int K = 0;


    cin >> N >> K;

    LL n10 = 0;
    string n9;

    for (int i = 0; i < K; i++) {

        n10 = Base8to10(N);

        n9 = Base10to9(n10);

        for (int j = 0; j < n9.size(); j++) {
            if (n9[j] == '8')
                n9[j] = '5';
        }

        N = n9;
    }

    cout << N << endl;

    return 0;
}

