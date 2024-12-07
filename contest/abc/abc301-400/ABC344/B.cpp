#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> A;
    int input_num = 100;


    while (input_num != 0) {

        cin >> input_num;
        A.push_back(input_num);
    }

    for (int i = A.size() - 1; i >= 0; i--) {
        cout << A[i] << endl;
    }

    return 0;
}

