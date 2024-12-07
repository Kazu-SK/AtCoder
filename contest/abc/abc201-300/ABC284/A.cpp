
#include <iostream>
#include <vector>
#include <stack>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;

    cin >> N;


    string s;
    stack<string> S;

    for (int i = 0; i < N; i++) {
        cin >> s;
        S.push(s);
    }

    for (int i = 0; i < N; i++) {
        cout << S.top() << endl;
        S.pop();
    }

    return 0;
}
