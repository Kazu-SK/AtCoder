#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    for (int n = N; n <= 919; n++) {

        string s = to_string(n);
        int s_num[3] = { 0 };

        for (int i = 0; i < s.size(); i++) {
            s_num[i] = s[i] - '0';
        }

        if (s_num[0] * s_num[1] == s_num[2]) {
            cout << n << endl;
            break;
        }
    }

    return 0;
}

