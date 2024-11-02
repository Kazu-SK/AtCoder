#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> D(N + 1, 0);


    for (int i = 1; i <= N; i++) {
        cin >> D[i];
    }


    string s;
    int ans_count = 0;

    for (int i = 1; i <= N; i++) {

        for (int day = 1; day <= D[i]; day++) {
            s += to_string(i);
            s += to_string(day);

            char zoro = s[0];
            bool ans_judge = true;

            for (int s_itr = 1; s_itr < s.size(); s_itr++) {

                if (s[s_itr] != zoro) {
                    ans_judge = false;
                }
            }

            if (ans_judge == true)
                ans_count++;

            s.clear();
        }
    }

    cout << ans_count << endl;

    return 0;
}

