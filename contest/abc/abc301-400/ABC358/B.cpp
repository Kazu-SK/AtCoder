#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0;
    int A = 0;


    cin >> N >> A;


    vector<int> T(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> T[i];
    }


    vector<int> i_time(N + 1, 0);

    for (int i = 1; i <= N; i++) {

        if (i_time[i - 1] < T[i]) {
            i_time[i] = A + T[i];
        }
        else {
            i_time[i] = A + i_time[i - 1];
        }

        cout << i_time[i] << endl;
    }

    return 0;
}

