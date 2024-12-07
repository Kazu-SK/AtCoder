#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{

    int N = 0;


    cin >> N;

    vector<long long> A(N + 1, 0);
    vector<long long> A_size(N + 1, 0);


    for (int i = 1; i <= N; i++) {
        cin >> A[i];

        A_size[i] = A[i];
    }

    vector<long long> stack_A_size(N + 1, 0);
    int stack_i = 1;

    stack_A_size[0] = -1;

    for (int i = 1; i <= N; i++) {

        stack_A_size[stack_i] = A_size[i];

        while (stack_A_size[stack_i - 1] == stack_A_size[stack_i]) {

            stack_A_size[stack_i - 1] = stack_A_size[stack_i] + 1;
            stack_A_size[stack_i] = 0;
            stack_i--;
        }

        if (i != N)stack_i++;
    }

    cout << stack_i << endl;

    return 0;
}

