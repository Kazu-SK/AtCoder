#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main()
{
    int N = 0;
    int X = 0;
    queue<int> X_que;


    cin >> N >> X;

    vector<char> A(N + 2, 'x');


    for (int i = 1; i <= N; i++)
        cin >> A[i];


    X_que.push(X);
    A[X] = '@';

    int X_que_front;

    while (X_que.empty() == false) {

        X_que_front = X_que.front();
        X_que.pop();

        if (A[X_que_front - 1] == '.') {
            A[X_que_front - 1] = '@';
            X_que.push(X_que_front - 1);
        }

        if (A[X_que_front + 1] == '.') {
            A[X_que_front + 1] = '@';
            X_que.push(X_que_front + 1);
        }
    }

    for (int i = 1; i <= N; i++)
        cout << A[i];

    return 0;
}
