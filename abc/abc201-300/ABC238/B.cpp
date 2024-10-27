
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = unsigned long long;


int main()
{
    int N = 0;


    cin >> N;


    vector<int> A(N + 1);
    //vector<int> sum(N + 1,0);
    vector<int> deg;
    map<int, bool> Map;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int sum = 0;

    deg.push_back(0);

    for (int i = 1; i <= N; i++) {

        sum += A[i];
        sum %= 360;

        if (Map[sum] == false) {
            deg.push_back(sum);
            Map[sum] = true;
        }
    }

    deg.push_back(360);

    sort(deg.begin(), deg.end());

    int ans = 0;
    for (int i = 1; i < deg.size(); i++) {
        ans = max(ans, abs(deg[i] - deg[i - 1]));
    }

    cout << ans << endl;
    
    return 0;

}

