#include <iostream>

using namespace std;

double Function(double x) {

    return x * x * x + x;
}

int main()
{

    double N = 0;


    cin >> N;


    double x_H = 1000000000;
    double x_L = 0;
    double x_M = 0;
    double answer = 0;


    while (x_L < x_H) {

        x_M = (x_L + x_H) / 2;
        answer = Function(x_M);

        if (answer >= (N - 0.001) && answer <= (N + 0.001)) {

            cout << x_M << endl;
            break;
        }

        if (answer < N)
            x_L = x_M;
        if (answer > N)
            x_H = x_M;
    }

    return 0;
}

