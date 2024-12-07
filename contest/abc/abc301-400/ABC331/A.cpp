
#include <iostream>

using namespace std;

int main()
{
    int M = 0, D = 0;
    int y = 0, m = 0, d = 0;

    cin >> M >> D;
    cin >> y >> m >> d;


    d += 1;

    if (d > D) {
        d = 1;
        m += 1;

        if (m > M) {
            y += 1;
            m = 1;
        }
    }

    cout << y <<" "<< m << " " << d << endl;


    return 0;
}

