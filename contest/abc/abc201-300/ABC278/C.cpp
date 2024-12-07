
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

//map<int, vector<int>> Follow;
map<pair<int, int>, bool> Check; //firstがsecondをフォローしている。

int main()
{
    int N = 0, Q = 0;


    cin >> N >> Q;


    vector<int> T(Q);
    vector<int> A(Q);
    vector<int> B(Q);

    for (int i = 0; i < Q; i++) {
        cin >> T[i] >> A[i] >> B[i];
    }

    for (int i = 0; i < Q; i++) {

        pair<int, int> p;


		p.first = A[i];
		p.second = B[i];

        if (T[i] == 1) {


            if (Check[p] == false) {
                Check[p] = true;
                //Follow[B[i]].push_back(A[i]);
            }
        }
        else {
            if (T[i] == 2) {

                if (Check[p] == true) {
                    Check[p] = false;
                }
            }
            else {
                pair<int, int> p[2];

                p[0].first = A[i];
                p[0].second = B[i];
                p[1].first = B[i];
                p[1].second = A[i];

                if (Check[p[0]] == true && Check[p[1]] == true) {
                    cout << "Yes" << endl;
                }
                else {
                    cout << "No" << endl;
                }

            }
        }

    }

    return 0;
}

