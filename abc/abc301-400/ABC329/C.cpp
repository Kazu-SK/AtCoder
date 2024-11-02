#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main()
{
    int N = 0;
    string S;
    map<char, int> c_num;


    cin >> N;
    cin >> S;

    int cont_num = 1;
    c_num[S[0]]++;

    for (int i = 1; i < N; i++) {

        if (S[i] != S[i - 1]) {
            cont_num = 1;
        }

        if (S[i] == S[i - 1]) {
            cont_num++;
            c_num[S[i]] = max(cont_num, c_num[S[i]]);
        }

        if (c_num[S[i]] == 0) {
            cont_num = 1;
            c_num[S[i]]++;
        }
    }

    //    map<int, int> ans_memo;
    int ans = 0;

    for (auto itr = c_num.begin(); itr != c_num.end(); itr++) {
        ans += itr->second;
    }

    cout << ans << endl;

    return 0;
}

