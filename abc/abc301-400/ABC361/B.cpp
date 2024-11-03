
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int a, b, c, d, e, f;
    int g, h, i, j, k, l;


    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    bool judge = true;

    if (d <= g)judge = false;
    if (a >= j)judge = false;
    if (e <= h)judge = false;
    if (b >= k)judge = false;
    if (f <= i)judge = false;
    if (c >= l)judge = false;


    if (judge == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}

