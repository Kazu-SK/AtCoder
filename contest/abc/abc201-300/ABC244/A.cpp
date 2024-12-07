
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

    cin >> N;


    vector<char> S(N);

    for (int i = 0; i < N; i++)
        cin >> S[i];


    cout << S[N - 1] << endl;


    return 0;
}

