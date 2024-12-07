
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

map<int, LL> Repunit;

LL MakeRepunit(int keta){

    LL ans = 0;
    LL m = 1;

    if (Repunit[keta] == 0) {
        for (int i = 0; i < keta; i++) {
            ans += m;
            m *= 10;
        }

        Repunit[keta] = ans;
    }
    else {
        ans = Repunit[keta];
    }

    return ans;
}

int main()
{
    int N = 0;


    cin >> N;

    int calc_counter = 0;
    LL result = 0;

    int i_upper = 1;

    
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= i; j++) {
            for (int z = 1; z <= j; z++) {
                calc_counter++;

                result += MakeRepunit(i);
                result += MakeRepunit(j);
                result += MakeRepunit(z);

                if (calc_counter == N) {
                    cout << result << endl;
                    return 0;
                }

                result = 0;
            }
        }
    }

    return 0;
}

