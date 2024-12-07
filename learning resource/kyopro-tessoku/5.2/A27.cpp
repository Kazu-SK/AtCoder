#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int A, B;


    cin >> A >> B;


    while (A >= 1 && B >= 1) {
        //cout << "A = " << A << endl;
        //cout << "B = " << B << endl;

        if (A >= B) {
            A = A % B;
        }
        else if (B >= A) {
            B = B % A;
        }
        else {
        }
    }

    if (A == 0) {
        cout << B << endl;
    }

    if (B == 0) {
        cout << A << endl;
    }

    return 0;
}

