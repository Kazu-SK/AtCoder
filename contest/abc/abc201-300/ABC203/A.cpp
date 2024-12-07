
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
    int a = 0, b = 0, c = 0;
    int box[7] = { 0 };
    set<int> s;


    cin >> a >> b >> c;

    s.insert(a);
    box[a]++;
    s.insert(b);
    box[b]++;
    s.insert(c);
    box[c]++;


    int s_size = s.size();
    int ans = 0;

    if (s_size == 1) {
        ans = a;
    }
    else {
        if (s_size == 3) {
            ans = 0;
        }
        else {
            for (int i = 1; i <= 6; i++) {
                if (box[i] == 1) {
                    ans = i;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}

