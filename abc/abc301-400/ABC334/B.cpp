
#include <iostream>

using namespace std;

int main()
{
    long long A = 0, M = 0, L = 0, R = 0;
    long long ans = 0;

    cin >> A >> M >> L >> R;


    long long min_L_tree = 2e18;
    long long tree = 0;
    long long tree2 = 0;



    tree = abs(L - A) / M;
    tree2 = abs(L - A) % M;


    //cout << "tree = " << tree << endl;

    if (tree2 > 0) {
		if (L < A) {
			min_L_tree = A - tree * M;
		}
		else if (L > A) {
			min_L_tree = A + (tree + 1) * M;
		}
    }
    else {
        min_L_tree = L;
    }

    //cout << min_L_tree << endl;

    if (R < min_L_tree) {
        cout << ans << endl;
    }
    else {

        ans = (R - min_L_tree) / M + 1;

        cout << ans << endl;
    }

    return 0;
}

