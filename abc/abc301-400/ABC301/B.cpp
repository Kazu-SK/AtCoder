
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> A(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }


    for (int i = 0; i < A.size() - 1; i++) {

        char calc;
        if (A[i] > A[i + 1]) {
            calc = '-';
        }
        else {
            calc = '+';
        }

        while(abs(A[i] - A[i + 1]) != 1) {

                        
            if (calc == '-') {
                A.insert(A.begin() + i + 1, A[i] - 1);
            }
            else {
                A.insert(A.begin() + i + 1, A[i] + 1);
            }

            i++;
        }
    }

	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
    
    return 0;
}

