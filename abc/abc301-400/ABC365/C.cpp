#include <iostream>
#include <vector>

using namespace std;

using LL = long long;


bool check(LL x, LL m, vector<LL> A) {

    LL sum = 0;

    for (int i = 0; i < A.size(); i++) {
        sum += min(x, A[i]);
    }

    //cout << sum << endl;
    if (sum <= m)return true;
    return false;
}

int main()
{
    LL N = 0;
    LL M = 0;


    cin >> N >> M;


    vector<LL> A(N, 0);
    LL sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }

    if (sum <= M) {
        cout << "infinite" << endl;
        return 0;
    }


    LL left = 1;
    LL right = 1e9;

    while (left < right) {

        LL mid = (left + right) / 2;

        //cout << "left = " << left << endl;
        //cout << "right = " << right << endl;
        bool answer = check(mid, M, A);

        if (answer == false)right = mid;
        if (answer == true)left = mid + 1;

        //cout << "af_left = " << left << endl;
        //cout << "af_right = " << right << endl;
    }

    left--;

    cout << left << endl;

    return 0;
}

