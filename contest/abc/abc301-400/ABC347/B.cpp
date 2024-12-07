#include <iostream>
#include <map>

using namespace std;

int main()
{

    string S;


    cin >> S;
    map<string, int> Map;


    int ans_count = 0;

    for (int left = 0; left < S.size(); left++) {
        for (int right = 0; right < S.size(); right++) {

            for (int i = left; i <= right; i++) {
                string sub = S.substr(left, right - left + 1);

                if (Map[sub] == 0) {
                    Map[sub]++;
                    ans_count++;
                }
            }
        }
    }

    cout << ans_count << endl;

    return 0;
}

