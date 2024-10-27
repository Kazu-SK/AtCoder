
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
    int X = 0;


    cin >> N >> X;

    vector<int> A(N);


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }


    int money = 0;

    for (int i = 0; i < N; i++) {
        int num = i + 1;


        if (num % 2 == 0){
            A[i]--;
        }

        money += A[i];
    }

    if (money <= X) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

