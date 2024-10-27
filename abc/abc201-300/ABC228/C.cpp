
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    int K = 0;


    cin >> N >> K;


    typedef struct {
        int student_num;
        int Sum;
        int P[3];
        bool judge;
    }Student;

    vector<Student> S(N);


    for (int i = 0; i < N; i++) {

        S[i].student_num = i;

        for (int j = 0; j < 3; j++) {
            cin >> S[i].P[j];
            S[i].Sum += S[i].P[j];

        }
    }

    sort(S.rbegin(), S.rend(), [&](const auto& l, const auto& r) {return l.Sum < r.Sum; });

    for (int i = 0; i < N; i++) {
        if (i < K) {
            S[i].judge = true;
        }
        else {
            if (S[i].Sum + 300 >= S[K - 1].Sum) {
                //cout << S[i].Sum + 300 << " " << S[K - 1].Sum << endl;
                S[i].judge = true;
            }
            else {
                S[i].judge = false;
            }
        }
    }

    sort(S.begin(), S.end(), [&](const auto& l, const auto& r) {return l.student_num < r.student_num; });

    for (int i = 0; i < N; i++) {
        if (S[i].judge) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}

