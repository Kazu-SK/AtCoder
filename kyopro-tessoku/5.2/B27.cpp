#include <iostream>
#include <vector>

using namespace std;


int main()
{
    long long A = 0, B = 0;
    long long multi_AB = 0;
    long long gcf = 0;
    long long lcm = 0;


    cin >> A >> B;

    multi_AB = A * B;

    while (A >= 1 && B >= 1) {

        if (A >= B) {
            A = A % B;
            continue;
        }

        if (B >= A)
            B = B % A;
    }


    if (A >= B)
        gcf = A;
    else
        gcf = B;


    lcm = multi_AB / gcf;


    cout << lcm << endl;

    return 0;
}

