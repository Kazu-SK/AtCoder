#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, K = 0;


    cin >> N >> K;

    vector<int> printer(N + 1, 0);
    vector<int> A(N + 1, 0);

    for (int printer_num = 1; printer_num <= N; printer_num++) {
        cin >> A[printer_num];
    }

    long long L = 1;
    long long R = 1000000000LL;
    long long M = (L + R) / 2;
    long long paper = 0;

    while (L < R) {

        for (int printer_num = 1; printer_num <= N; printer_num++) {
            paper += M / A[printer_num];
        }

        if (K > paper) {
            L = M + 1;
        }

        if (K <= paper) {
            R = M;
        }

        M = (L + R) / 2;
        paper = 0;

        /*
         cout << "L = " << L << endl;
         cout << "R = " << R << endl;
         cout << "M = " << M << endl;
         */


    }

    cout << L << endl;

    return 0;

}

