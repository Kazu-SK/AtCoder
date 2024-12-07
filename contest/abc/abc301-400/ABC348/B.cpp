#include <iostream>
#include <vector>
#include <math.h>


using namespace std;


int main()
{
    int N = 0;


    cin >> N;


    vector<int> X(N + 1, 0);
    vector<int> Y(N + 1, 0);
    vector<double> distance(N + 1, 0);
    vector<int> answer(N + 1, 0);


    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {

            if (i == j) {
                continue;
            }

            double tmp = sqrt(pow(X[i] - X[j], 2) + pow(Y[i] - Y[j], 2));

            if (distance[i] < max(distance[i], tmp)) {
                distance[i] = tmp;
                answer[i] = j;
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << answer[i] << endl;
    }

    return 0;

}

