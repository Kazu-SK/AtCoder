
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
    string S, T;


    cin >> S >> T;

    string init_S = S;
    bool judge = false;

    if (S == T) {
        judge = true;
    }

    for (int i = 0; i < S.size() - 1; i++) {
		char tmp;

		tmp = S[i];
		S[i] = S[i + 1];
		S[i + 1] = tmp;

		if (S == T) {
			judge = true;
		}

		S = init_S;
    }


    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

