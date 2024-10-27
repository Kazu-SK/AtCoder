
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> d(N);

    for (int i = 0; i < N; i++)
        cin >> d[i];


    sort(d.rbegin(), d.rend());

    int answer = 1;

    for (int i = 1; i < N; i++) {
       if (d[i] < d[i - 1]) {
           answer++;
       }
    }

    cout << answer << endl;

    return 0;
}

