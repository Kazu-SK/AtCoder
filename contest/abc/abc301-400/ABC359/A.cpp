#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int N = 0;


    cin >> N;


    vector<string> S(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int answer_count = 0;
    string search_S = "Takahashi";

    for (int i = 0; i < N; i++) {
        if (equal(S[i].begin(), S[i].end(), search_S.begin()) == true) {
            answer_count++;
        }
    }

    cout << answer_count << endl;

    return 0;
}

