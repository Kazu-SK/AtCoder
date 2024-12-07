
#include <iostream>
#include <vector>


using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<char> S(N);


    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int l[2] = { 0 };
    int l_itr = 0;
    int ast = 0;

    for (int i = 0; i < N; i++) {

        if (S[i] == '|') {
            l[l_itr] = i;
            l_itr++;
        }

        if (S[i] == '*') {
            ast = i;
        }
    }


    if (ast > l[0] && ast < l[1]) {
        cout << "in" << endl;
    }
    else {
        cout << "out" << endl;
    }

    return 0;
}

