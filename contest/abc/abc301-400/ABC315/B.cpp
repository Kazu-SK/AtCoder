
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using LL = long long;

int main()
{
    int M = 0;


    cin >> M;


    vector<int> D(M + 1, 0);
    vector<int> sum_D(M + 1, 0);
    int days = 0;

    for (int i = 1; i <= M; i++) {
        cin >> D[i];
        sum_D[i] = D[i] + sum_D[i - 1];
    }

    int ans_day = (sum_D[M] + 1) / 2;
    int a = 1;
    int b = ans_day;

    for (int m = 1; m <= M; m++) {
        if (sum_D[m] >= ans_day) { // > じゃなくて >=
            a = m;
            b = ans_day - sum_D[m - 1];
            break;// break忘れ
        }
    }

    cout << a << " " << b << endl;

    
    return 0;
}

