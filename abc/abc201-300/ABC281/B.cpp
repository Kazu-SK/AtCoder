
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    string S;


    cin >> S;


    bool judge = true;

    int s_num = 0;

    if (S.size() != 8) {
        judge = false;
    }

	s_num = S[0] - 'A';
	if (!(s_num >= 0 && s_num <= 26)) {
		judge = false;
	}

    s_num = S[S.size() - 1] - 'A';
	if (!(s_num >= 0 && s_num <= 26)) {
		judge = false;
	}

    
    for (int i = 1; i < S.size() - 1; i++) {

		s_num = S[i] - '0';

        if (i == 1) {
            if (!(s_num >= 1 && s_num <= 9)) {
                judge = false;
            }
        }
        else {
			if (!(s_num >= 0 && s_num <= 9)) {
				judge = false;
			}
        }
    }

    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

