#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, K = 0;


    cin >> N >> K;


    vector<int> A(N + 1, 0);


    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int count = 0;
    int group = 1;
    int init_K = K;



    while (group <= N) {

        while (K >= A[group]) {
            K -= A[group];
            group++;

            if (group > N) {
                break;
            }
        }

        count++;
        K = init_K;
    }

    cout << count << endl;

    return 0;
}

