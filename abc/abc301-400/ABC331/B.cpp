
#include <iostream>

using namespace std;

using ll = long long;

int main()
{
    ll N, S, M, L;


    cin >> N >> S >> M >> L;

    ll price = 1e12;

    for (int s_num = 0; s_num <= N; s_num++) {
        for (int m_num = 0; m_num  <= N; m_num++) {
            for (int l_num = 0; l_num <= N; l_num++) {

                if (s_num * 6 + m_num * 8 + l_num * 12 >= N) {
                    price = min(s_num * S + m_num * M + l_num * L, price);
                }
            }
        }
    }

    cout << price << endl;

    return 0;
}

