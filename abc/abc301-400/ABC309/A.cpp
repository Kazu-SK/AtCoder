
#include <iostream>
#include <vector>


using namespace std;


using LL = long long;

int main()
{
    int A = 0, B = 0;


    cin >> A >> B;


	if (abs(A - B) == 1){

        if ((A >= 3 && B >= 3) && (A % 3 <= 1 && B % 3 <= 1))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
	}
    else {
        cout << "No" << endl;
    }

    return 0;
}

