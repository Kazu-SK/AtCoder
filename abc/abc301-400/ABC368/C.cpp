#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> H(N);

    for (int i = 0; i < N; i++)
        cin >> H[i];


    int h_itr = 0;
    LL T = 0;
    const int M[3] = { 1, 1, 3 };
    int m_itr = 0;

    while (H[N - 1] > 0) {


        int sho = H[h_itr] / 5;
        int amari = H[h_itr] % 5;

        T += sho * 3;

        H[h_itr] -= sho * 5;

        m_itr = 0;
        bool loop_judge = false;
        bool last = false;

        if (h_itr == N - 1)
            last = true;


        if (amari == 0 && h_itr < N - 1)
            h_itr++;

        while (amari > 0 || loop_judge == true) {
            H[h_itr] -= M[m_itr];
            amari -= M[m_itr];

            if (H[h_itr] <= 0 && h_itr < N - 1)
                h_itr++;

            m_itr++;
            T++;

            if (m_itr > 2)
                m_itr = 0;

            if (m_itr != 0 && last == false) {
                loop_judge = true;
            }
            else {
                loop_judge = false;
            }

        }

    }

    //for (int i = 0; i < N; i++)
    //    cout << H[i] << " ";
    //cout << endl;

    cout << T << endl;

    return 0;
}

