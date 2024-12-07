
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    int Y = 0;


    cin >> N >> Y;



    int answer = 0;
    

    for (int a = 0; a <= N; a++) {
        for (int b = 0; b <= N - a; b++) {

            int c;

            c = N - a - b;

			answer = 10000 * a + 5000 * b + 1000 * c;

			if (answer == Y) {
				cout << a << " " << b << " " << c << endl;
				return 0;
			}
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;

    return 0;
}

