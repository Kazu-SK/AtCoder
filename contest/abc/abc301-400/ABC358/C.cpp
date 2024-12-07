#include <iostream>
#include <vector>

using namespace std;

void Eat(vector<char>& eat, vector<char> kinds) {

    for (int i = 0; i < kinds.size(); i++) {
        if (kinds[i] == 'o') {
            eat[i] = 'o';
        }
    }
}


bool EatAllpopcorn(vector<char> eat) {

    bool judge = true;

    for (int i = 0; i < eat.size(); i++) {
        if (eat[i] == 'x') {
            judge = false;
            break;
        }
    }

    return judge;
}


int main()
{
    int N = 0, M = 0;


    cin >> N >> M;


    vector<vector<char>> popcorn_kinds(N, vector<char>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> popcorn_kinds[i][j];
        }
    }

    int store_comb_num = 0;
    int answer = 10000;


    for (int store_comb_num = 1; store_comb_num < (1 << N); store_comb_num++) {

        int select_store_num = 0;
        vector<char> popcorn_eat(M, 'x');

        for (int bit = 0; bit < N; bit++) {
            if (store_comb_num & (1 << bit)) {

                Eat(popcorn_eat, popcorn_kinds[bit]);
                select_store_num++;
            }
        }

        if (EatAllpopcorn(popcorn_eat) == true) {
            answer = min(answer, select_store_num);
        }
    }

    cout << answer << endl;

    return 0;
}

