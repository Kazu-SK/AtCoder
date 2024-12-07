#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

bool Triangle_C(LL x1, LL y1, LL x2, LL y2, LL x3, LL y3) { 

    LL ans = 0;
    bool judge = true;


    ans = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);

    if (ans == 0)
        judge = false;

    //false : 3点が同一直線状
    //true : 3点が三角形になる

    return judge;
}

int main()
{
    int N = 0;


    cin >> N;


    vector<LL> X(N);
    vector<LL> Y(N);


    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    int ans = 0;

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int z = j + 1; z < N; z++) {

                bool judge = false;

                judge = Triangle_C(X[i], Y[i], X[j], Y[j], X[z], Y[z]);

                if (judge == true) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}

