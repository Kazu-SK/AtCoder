
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


    map<int, bool> Map;

    for (int i = 1; i <= N * 2 + 1; i++) {
        Map[i] = false;
    }

    int aoki = 0;
    //const int TRUE = 1;
    //const int FALSE = 0;

    bool takahashi_judge = true;
    bool aoki_judge = true;

    while (true) {


        takahashi_judge = false;

        for (auto &p : Map) {
            if (p.second == false) {
                cout << p.first << endl;
                p.second = true;
                takahashi_judge = true;
                break;
            }
        }

        if (takahashi_judge == false) {
            cout << "0" << endl;
            break;
        }


        aoki_judge = false;

        for (auto &p : Map) {
            if (p.second == false) {
                aoki_judge = true;
                break;
            }
        }

        if (aoki_judge == false) {
            cout << "0" << endl;
            break;
        }

        cin >> aoki;

        Map[aoki] = true;
    }

    return 0;
}

