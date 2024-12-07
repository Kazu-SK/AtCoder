#include <iostream>
#include <vector>

#include <algorithm>


using namespace std;

long long GCD(long long A, long long B) {

    while (A >= 1 && B >= 1) {

        if (A >= B) {
            A = A % B;
        }
        else {
            B = B % A;
        }
    }

    if (A != 0)return A;
    return B;
}


int main()
{
    long long A = 0, B = 0, C = 0;

    vector<long long> cake_side;


    cin >> A >> B >> C;

    cake_side.push_back(A);
    cake_side.push_back(B);
    cake_side.push_back(C);

    sort(cake_side.begin(), cake_side.end());


    long long gcd = cake_side[0];
    for (int i = 1; i < cake_side.size(); i++) {
        gcd = GCD(gcd, cake_side[i]);
    }

    long long answer = 0;
    for (int i = 0; i < cake_side.size(); i++) {
        answer += cake_side[i] / gcd - 1;
    }

    cout << answer << endl;

    return 0;
}

