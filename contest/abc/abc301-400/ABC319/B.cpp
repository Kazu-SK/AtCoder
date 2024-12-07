
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    string S;


    cin >> N;


    for (int i = 0; i <= N; i++) {

        for (int j = 1; j <= 9; j++) {

            if (N % j == 0) {

                if (i % (N / j) == 0) {
                    char s = j + '0';
                    S.push_back(s);
                    break;
                }
            }

            if (j == 9) {
                S.push_back('-');
            }
        }
    }


    cout << S << endl;

    return 0;
}

