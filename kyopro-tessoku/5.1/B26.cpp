#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<bool> Deleted_number(N + 1, false); //true:delete
    //vector<int> prime_number;


    for (int i = 2; i * i <= N; i++) {

        if (Deleted_number[i] == true)continue;
        for (int j = i * 2; j <= N; j += i) {
            if (Deleted_number[j] == false)Deleted_number[j] = true;
        }
    }

    for (int i = 2; i <= N; i++) {
        if (Deleted_number[i] == false)cout << i << endl;
    }

    return 0;
}

