
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
    LL K = 0;
    LL Ka = 0;
    LL Ks = 0;


    cin >> N >> K;


    typedef struct {
        int A;
        LL Kasi;
        int itr;
    }Person;


    vector<Person> P(N);

    for (int i = 0; i < N; i++) {
        cin >> P[i].A;
        P[i].Kasi = 0;
        P[i].itr = i;
    }

    sort(P.begin(), P.end(), [&](const auto& l, const auto& r) {return l.A < r.A; });


    Ks = K / N;
    Ka = K % N;

    for (int i = 0; i < N; i++) {
        P[i].Kasi += Ks;
    }

    for (int i = 0; i < Ka; i++) {
        P[i].Kasi += 1;
    }

    sort(P.begin(), P.end(), [&](const auto& l, const auto& r) {return l.itr < r.itr; });

    for (int i = 0; i < N; i++) {
        cout << P[i].Kasi << endl;
    }

    return 0;
}

