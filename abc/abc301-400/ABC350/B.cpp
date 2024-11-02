#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int Q = 0;



    cin >> N >> Q;

    vector<bool> dent(1, false);
    vector<int> T(Q, 0);

    for (int i = 1; i <= N; i++) {
        dent.push_back(true);
    }

    for (int i = 0; i < Q; i++) {
        cin >> T[i];
    }


    for (int i = 0; i < Q; i++) {

        if (dent[T[i]] == true) {
            dent[T[i]] = false;
        }
        else {
            dent[T[i]] = true;
        }
    }

    int ans_count = 0;
    for (int i = 1; i < dent.size(); i++) {
        if (dent[i] == true) {
            ans_count++;
        }
    }

    cout << ans_count << endl;

    return 0;
}

