#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    string S;

    vector<string> S_OK;
    map<string, int> Map;


    for (int i = 1; i <= N; i++) {

        cin >> S;

        if (Map[S] == 0) {
            Map[S] = i;
            S_OK.push_back(S);
        }
    }

    for (int i = 0; i < S_OK.size(); i++) {
        cout << Map[S_OK[i]] << endl;
    }

    return 0;
}

