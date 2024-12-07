#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> W(N, 0);
    vector<int> X(N, 0);


    for (int i = 0; i < N; i++) {
        cin >> W[i] >> X[i];
    }

    int ans_count = 0;

    for (int t = 0; t < 24; t++) {

        int human_count = 0;


        for (int i = 0; i < N; i++) {

            int time = (X[i] + t) % 24;

            if (time >= 9 && time <= 17) {
                human_count += W[i];
            }
        }

        ans_count = max(ans_count, human_count);
    }


    cout << ans_count << endl;

    return 0;
}

