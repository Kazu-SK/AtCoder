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
    //set<int> s;
    map<int, bool> Map;


    cin >> N;


    vector<int> A(N);
    //vector<int> S;

    for (int i = 0; i < N; i++) {
        cin >> A[i];

        //if (Map[A[i]] == false) {
            //S.push_back(A[i]);
        Map[A[i]] = true;
        //}
    }

    //sort(S.begin(), S.end());

    for (int num = 0; num <= N; num++) {

        if (Map[num] == false) {
            cout << num << endl;
            break;
        }
    }

    return 0;
}

