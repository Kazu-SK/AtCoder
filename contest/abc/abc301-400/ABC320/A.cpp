
#include <iostream>
#include <vector>


using namespace std;


int Pow(int c, int d) {

    int ans = 1;

    for (int i = 1; i <= d; i++) {

        ans *= c;
    }

    return ans;
}

int main()
{
    int A, B;


    cin >> A >> B;


    cout << Pow(A, B) + Pow(B, A);


    return 0;
}

