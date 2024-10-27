
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
    string A, B;


    cin >> A >> B;


    int size = 0;


    size = min(A.size(), B.size());

    bool judge = true;

    for (int i = 0; i < size; i++) {
        int A_itr = A.size() - i - 1;
        int B_itr = B.size() - i - 1;

        int A_num = A[A_itr] - '0';
        int B_num = B[B_itr] - '0';


        if (A_num + B_num >= 10) {
            judge = false;
            break;
        }
    }

    if (judge) {
        cout << "Easy" << endl;
    }
    else {
        cout << "Hard" << endl;
    }

    return 0;
}

