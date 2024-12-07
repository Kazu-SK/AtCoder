#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int Q = 0;


    cin >> Q;


    vector<int> query(Q, 0);
    stack<string> S;
    string book_name;

    const int push = 1;
    const int top = 2;
    const int del = 3;


    for (int i = 0; i < Q; i++) {
        cin >> query[i];


        if (query[i] == push) {
            cin >> book_name;
            S.push(book_name);
        }

        if (query[i] == top) {
            cout << S.top() << endl;
        }

        if (query[i] == del) {
            S.pop();
        }
    }

    return 0;
}

