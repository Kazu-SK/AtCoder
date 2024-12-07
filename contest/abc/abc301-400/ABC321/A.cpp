
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string N;


    cin >> N;


    bool ans_judge = true;

    for (int i = 1; i < N.size() ; i++) {

        if (N[i - 1] <= N[i]){

            ans_judge = false;
        }
    }

    if (ans_judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

