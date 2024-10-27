
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
    int S = 0;
    int T = 0;


    cin >> S >> T;


    int ans = 0;

    for (int a = 0; a <= 10000; a++) {
        for (int b = 0; b <= 10000; b++) {

            int range_c = 0;
            int c = 0;

            range_c = S - a - b;

            if (range_c < 0) {
                continue;
            }

            while (c <= range_c) {

				if (a * b * c <= T) {
					//cout << a << " " << b << " " << c << endl;
					ans++;
				}
                
                c++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

