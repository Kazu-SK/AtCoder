#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int Q = 0;
    queue<string> Q_name;

    cin >> Q;

    const int push = 1;
    const int front = 2;
    const int pop = 3;

    vector<int> queue_type(Q, 0);
    string name;

    for (int i = 0; i < Q; i++) {

        cin >> queue_type[i];

        if (queue_type[i] == push) {

            cin >> name;
            Q_name.push(name);
        }

        if (queue_type[i] == front) {
            cout << Q_name.front() << endl;
        }

        if (queue_type[i] == pop) {
            Q_name.pop();
        }

    }

    return 0;
}

